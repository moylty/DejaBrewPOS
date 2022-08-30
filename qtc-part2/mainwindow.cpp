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
    ui->onLabel->setText("Order Number: " + QString::number(orderNum));
    // make order table stretch to fit all available space
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
    QLabel *tip = new QLabel("<b>Tip:</b><br> Use tab, arrow keys and space <br>to efficiently use the program.");
    QLabel *author = new QLabel("<b>Tyler Moyle - 2022</b>");
    label->setAlignment(Qt::AlignTop | Qt::AlignCenter);
    tip->setAlignment(Qt::AlignTop | Qt::AlignCenter);
    author->setAlignment(Qt::AlignTop | Qt::AlignCenter);

    QAbstractButton *bExit = new QPushButton("Close");

    vlayout->addWidget(aboutTitle);
    vlayout->addWidget(label);
    vlayout->addWidget(tip);
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
        ui->orderTable->insertRow(ui->orderTable->rowCount());  // add a new row

        selectedItem = ui->menuList->currentItem()->text(); // get current item name selection
        selectedItem.chop(5);  // remove price from name string
        qvStr = QString::number(quantityValue = ui->orderQuantity->value()); // get quantity value and make it into a qstring
        priceStr = "Empty";


        if (selectedItem.contains("Flat White"))
        {
            priceStr = QString::number((quantityValue) * prices[0], 'f', 2);
        }
        else if (selectedItem.contains("Cappuccino"))
        {
            priceStr = QString::number((quantityValue) * prices[1], 'f', 2);
        }
        else if (selectedItem.contains("Expresso"))
        {
            priceStr = QString::number((quantityValue) * prices[2], 'f', 2);
        }
        else if (selectedItem.contains("Long Black"))
        {
            priceStr = QString::number((quantityValue) * prices[3], 'f', 2);
        }
        else if (selectedItem.contains("Macchiato"))
        {
            priceStr = QString::number((quantityValue) * prices[4], 'f', 2);
        }

        priceStr.prepend("$"); // add $ to the start of the float


        QTableWidgetItem *newNameItem = new QTableWidgetItem(selectedItem);
        QTableWidgetItem *newQuantityItem = new QTableWidgetItem(qvStr);
        QTableWidgetItem *newPriceItem = new QTableWidgetItem(priceStr);

        ui->orderTable->setItem(rCount, 0, newNameItem); // name
        ui->orderTable->setItem(rCount, 1, newQuantityItem); // quantity
        ui->orderTable->setItem(rCount, 2, newPriceItem);   // price

        // get the most recent price string
        latestPrice = ui->orderTable->item(rCount, 2)->text();
        // remove the $
        latestPrice.remove(0, 1);
        // convert the string to float and add it to the total
        lpFloat = latestPrice.toFloat();
        orderTotal += lpFloat;
        // format the float so that there are two decimal places
        strTotal = "$" + QString::number(orderTotal, 'f', 2);
        // set the value of the label to the total value
        ui->totalValue->setText(strTotal);

        rCount++;

        // reset the spinbox quantity value to 1 for the next item
        ui->orderQuantity->setValue(1);
    }
}

void MainWindow::on_actionNext_Order_triggered()
{
    // initiate the next order, so resetting everything and incrementing order number
    orderNum++;
    // update order counter
    ui->onLabel->setText("Order Number: " + QString::number(orderNum));
    // delete all current table rows
    ui->orderTable->setRowCount(0);
    // reset placement counter
    rCount = 0;

    // reset total to 0 and regenerate string to display it
    orderTotal = 0.00;
    strTotal = "$" + QString::number(orderTotal, 'f', 2);
    // set the value of the label to the total value
    ui->totalValue->setText(strTotal);

}


void MainWindow::on_noButton_clicked()
{
    // call the same function as the menu bar entry so they are functionally identical
    on_actionNext_Order_triggered();
}


void MainWindow::on_undoButton_clicked()
{
    //delete the last row, decrement row count, remove the second empty row
    //get the previous total, subtract the last price, and update total

    if (ui->orderTable->rowCount() > 1)
    {
        //recalculate latest price
        qDebug() << rCount;
        latestPrice = ui->orderTable->item(rCount-1, 2)->text();
        latestPrice.remove(0, 1);
        lpFloat = latestPrice.toFloat();



        // get the previous total and make it a float from a QString
        prevTotal = ui->totalValue->text().remove(0, 1).toFloat();

        qDebug() << "prev - lpFloat = result :: " << prevTotal << " - " << lpFloat << " = " << prevTotal - lpFloat;

        orderTotal = prevTotal - lpFloat;
        strTotal = "$" + QString::number(orderTotal, 'f', 2);

        // set the value of the label to the total value
        ui->totalValue->setText(strTotal);



        ui->orderTable->removeRow(rCount);
        rCount--;
        ui->orderTable->removeRow(rCount);
        ui->orderTable->insertRow(ui->orderTable->rowCount());  // add a new row
    }


}


void MainWindow::on_actionUndo_triggered()
{
    on_undoButton_clicked();
}

