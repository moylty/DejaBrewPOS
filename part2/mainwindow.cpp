#include <QMenu>
#include <QMenuBar>
#include <QtWidgets>
#include <stdio.h>
#include "mainwindow.h"

//int scale = 1;

// this file defines the elements and properties of the GUI window.
// It uses the MainWindow class that is defined in the mainwindow.h
// header file.

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{

    auto *quit = new QAction("&Quit", this);
    auto *scaleUp = new QAction("&Scale +", this);
    auto *scaleDown = new QAction("&Scale -", this);

    QMenu *file = menuBar()->addMenu("&File");  // The top window options, file, about, etc.
    QMenu *view = menuBar()->addMenu("&View");
    file -> addAction(quit);
    view -> addAction(scaleUp);
    view -> addAction(scaleDown);

    // Create the button, make "this" the parent
    m_button = new QPushButton("My Button", this);
    // set size and location of the button
    m_button->setGeometry(QRect(QPoint(100, 100), QSize(200, 50)));

    QLabel *label = new QLabel(this);
    label->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    label->setText("first line\nsecond line");
    //label->setAlignment(Qt::AlignBottom | Qt::AlignRight);
    label->setGeometry(QRect(QPoint(10, 50), QSize(100, 50)));
 
    // Connect object signals to appropriate slot
    connect(quit, &QAction::triggered, qApp, QApplication::quit);
    
    connect(m_button, &QPushButton::released, this, &MainWindow::handleButton);
    
    connect(scaleUp, &QAction::triggered, this, &MainWindow::scaleIncrease);
    connect(scaleDown, &QAction::triggered, this, &MainWindow::scaleDecrease);
};

/*
  This function is defined under the MainWindow class,
  allowing it to react to the button press event
*/
void MainWindow::handleButton()
{
  // change the text
  m_button->setText("Button clicked!");
  // resize button
  m_button->resize(100,100);
}

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
