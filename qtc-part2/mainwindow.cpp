#include <QMenu>
#include <QMenuBar>
#include <QtWidgets>
#include <QPushButton>
#include <QFormLayout>
#include <QShortcut>
#include <QString>
#include <stdio.h>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // link the 'add to order' function to the button press
    connect(ui->addOrderButton,SIGNAL(pressed()),this,SLOT(addToOrder()));

    // append order number to order string
    ui->onLabel->setText(ui->onLabel->text() + QString::number(orderNum));

    ui->orderTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionQuit_triggered()
{
    MainWindow::close();
}

void MainWindow::on_actionAbout_triggered()
{
    QDialog *aboutText = new QDialog();
    aboutText->setWindowTitle("About");

    QVBoxLayout *vlayout = new QVBoxLayout;
    aboutText->setFixedSize(400 * scale, 280 * scale);

    QLabel *aboutTitle = new QLabel("<b>About DejaBrew POS System</b>");
    aboutTitle->setAlignment(Qt::AlignTop | Qt::AlignCenter);

    QLabel *label = new QLabel("This is a POS system for Déjà Brew, \na small mobile business that travels \naround in a van selling coffee. ");
    QLabel *author = new QLabel("<b>Tyler Moyle - 2022</b>");
    label->setAlignment(Qt::AlignTop | Qt::AlignCenter);
    author->setAlignment(Qt::AlignTop | Qt::AlignCenter);

    QAbstractButton *bExit = new QPushButton("Close");

    vlayout->addWidget(aboutTitle);
    vlayout->addWidget(label);
    vlayout->addWidget(author);
    vlayout->addWidget(bExit);

    aboutText->setLayout(vlayout);
    aboutText->show();
    aboutText->connect(bExit,SIGNAL(clicked()),aboutText,SLOT(close()));
}


void MainWindow::on_actionFullscreen_triggered() { isFullScreen() ? showNormal() : showFullScreen(); }

void MainWindow::addToOrder()
{
    if (ui->orderQuantity->value() > 0)
    {
        ui->orderTable->insertRow(ui->orderTable->rowCount());

        QString selectedItem;
        selectedItem = ui->menuList->currentItem()->text(); // get current item name selection
        selectedItem.chop(5);  // remove price from name string
        QString qvStr = QString::number(quantityValue = ui->orderQuantity->value()); // get quantity value and make it into a qstring


        QTableWidgetItem *newNameItem = new QTableWidgetItem(selectedItem);
        QTableWidgetItem *newQuantityItem = new QTableWidgetItem(qvStr);

        ui->orderTable->setItem(rCount, 0, newNameItem); // name
        ui->orderTable->setItem(rCount, 1, newQuantityItem);
        rCount++;
    }
}
