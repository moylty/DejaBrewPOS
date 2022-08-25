#include <QMenu>
#include <QMenuBar>
#include <QtWidgets>
#include <QFormLayout>
#include <stdio.h>
#include "mainwindow.h"

// this file defines the elements and properties of the GUI window.
// It uses the MainWindow class that is defined in the mainwindow.h
// header file.

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{

    auto *quit = new QAction("&Quit", this);
    auto *scaleUp = new QAction("&Scale +", this);
    auto *scaleDown = new QAction("&Scale -", this);
    auto *aboutPOS = new QAction("&About Deja Brew POS", this);

    // The top window options, file, about, etc.
    QMenu *file = menuBar()->addMenu("&File");
    QMenu *view = menuBar()->addMenu("&View");
    QMenu *help = menuBar()->addMenu("&Help");
    file -> addAction(quit);
    view -> addAction(scaleUp);
    view -> addAction(scaleDown);
    help -> addAction(aboutPOS);
 
    // Connecting the UI elements to their associated functions
    connect(quit, &QAction::triggered, qApp, QApplication::quit);
    
    connect(scaleUp, &QAction::triggered, this, &MainWindow::scaleIncrease);
    connect(scaleDown, &QAction::triggered, this, &MainWindow::scaleDecrease);

    connect(aboutPOS, &QAction::triggered, this, &MainWindow::aboutDJPdialog);
};

/*
  These functions are defined under the MainWindow class,
  allowing them to react to the associated UI events
*/

void MainWindow::scaleIncrease()
{
  scale += 0.1;
  resize(width * scale, height * scale);
}

void MainWindow::scaleDecrease()
{
  scale -= 0.1;
  resize(width * scale, height * scale);
}

void MainWindow::aboutDJPdialog()
{
  QDialog *aboutText = new QDialog();
  QVBoxLayout *vlayout = new QVBoxLayout;
  aboutText->setFixedSize(400,380);
  QLabel *label = new QLabel("This is a POS system for Déjà Brew, \na small mobile business that travels \naround in a van selling coffee. ");
  label->setAlignment(Qt::AlignTop | Qt::AlignCenter);
  QAbstractButton *bExit = new QPushButton("Close");
  vlayout->addWidget(label);
  vlayout->addWidget(bExit);
  aboutText->setLayout(vlayout);
  aboutText->show();
  aboutText->connect(bExit,SIGNAL(clicked()),aboutText,SLOT(close()));
}
