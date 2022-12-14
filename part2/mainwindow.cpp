#include <QMenu>
#include <QMenuBar>
#include <QtWidgets>
#include <QPushButton>
#include <QFormLayout>
#include "mainwindow.h"
#include "menu.h"

// this file defines the elements and properties of the GUI window.
// It uses the MainWindow class that is defined in the mainwindow.h
// header file.

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{

    auto *quit = new QAction("&Quit", this);
    //auto *scaleUp = new QAction("&Scale +", this);
    //auto *scaleDown = new QAction("&Scale -", this);
    auto *scale1x = new QAction("&Scale 1x", this);
    auto *scale2x = new QAction("&Scale 2x", this);
    auto *scale3x = new QAction("&Scale 3x", this);
    auto *scale4x = new QAction("&Scale 4x", this);

    auto *aboutPOS = new QAction("&About Deja Brew POS", this);

    // The top window options, file, about, etc.
    QMenu *file = menuBar()->addMenu("&File");
    QMenu *view = menuBar()->addMenu("&View");
    QMenu *help = menuBar()->addMenu("&Help");
    file -> addAction(quit);
    view -> addAction(scale1x);
    view -> addAction(scale2x);
    view -> addAction(scale3x);
    view -> addAction(scale4x);
    help -> addAction(aboutPOS);


    connect(quit, &QAction::triggered, qApp, QApplication::quit);

    connect(scale1x, &QAction::triggered, this, &MainWindow::scale1x);
    connect(scale2x, &QAction::triggered, this, &MainWindow::scale2x);
    connect(scale3x, &QAction::triggered, this, &MainWindow::scale3x);
    connect(scale4x, &QAction::triggered, this, &MainWindow::scale4x);

   connect(aboutPOS, &QAction::triggered, this, &MainWindow::aboutDJPdialog);
};

/*
  These functions are defined under the MainWindow class,
  allowing them to react to the associated UI events
*/
void MainWindow::scale1x() {scale = 1.0; resize(width * scale, height * scale);}
void MainWindow::scale2x() {scale = 2.0; resize(width * scale, height * scale);}
void MainWindow::scale3x() {scale = 3.0; resize(width * scale, height * scale);}
void MainWindow::scale4x() {scale = 4.0; resize(width * scale, height * scale);}

void MainWindow::aboutDJPdialog()
{

  QDialog *aboutText = new QDialog();
  aboutText->setWindowTitle("About");

  QVBoxLayout *vlayout = new QVBoxLayout;
  aboutText->setFixedSize(400 * scale, 280 * scale);

  QLabel *aboutTitle = new QLabel("<b>About DejaBrew POS System</b>");
  aboutTitle->setAlignment(Qt::AlignTop | Qt::AlignCenter);

  QLabel *label = new QLabel("This is a POS system for D??j?? Brew, \na small mobile business that travels \naround in a van selling coffee. ");
  label->setAlignment(Qt::AlignTop | Qt::AlignCenter);

  QAbstractButton *bExit = new QPushButton("Close");

  vlayout->addWidget(aboutTitle);
  vlayout->addWidget(label);
  vlayout->addWidget(bExit);

  aboutText->setLayout(vlayout);
  aboutText->show();
  aboutText->connect(bExit,SIGNAL(clicked()),aboutText,SLOT(close()));
}
