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

    ui->onLabel->setText(ui->onLabel->text() + QString::number(orderNum));

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
    label->setAlignment(Qt::AlignTop | Qt::AlignCenter);

    QAbstractButton *bExit = new QPushButton("Close");

    vlayout->addWidget(aboutTitle);
    vlayout->addWidget(label);
    vlayout->addWidget(bExit);

    aboutText->setLayout(vlayout);
    aboutText->show();
    aboutText->connect(bExit,SIGNAL(clicked()),aboutText,SLOT(close()));
}


void MainWindow::on_actionFullscreen_triggered()
{
    isFullScreen() ? showNormal() : showFullScreen();
}

void MainWindow::addToOrder()
{
    /*
        this function finds the currently selected values of the menu list
        and stores them in variables, allowing them to be added to the
        order.
    */
    QString selectedValue;
    selectedValue= ui->menuList->currentItem()->text();

    int quantityValue = ui->orderQuantity->value();

    qDebug().nospace() << selectedValue;
    qDebug() << "Quantity: " << quantityValue;
    ui->orderList->addItem(selectedValue);
}

