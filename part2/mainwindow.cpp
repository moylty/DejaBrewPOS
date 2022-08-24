#include <QMenu>
#include <QMenuBar>
#include <QtWidgets>
#include "mainwindow.h"

int scale = 1;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

    auto *quit = new QAction("&Quit", this);
    auto *scale = new QAction("&Scale", this);

    QMenu *file = menuBar()->addMenu("&File");  // The top window options, file, about, etc.
    QMenu *view = menuBar()->addMenu("&View");
    file -> addAction(quit);
    view -> addAction(scale);

    // Create the button, make "this" the parent
    m_button = new QPushButton("My Button", this);
    // set size and location of the button
    m_button->setGeometry(QRect(QPoint(100, 100), QSize(200, 50)));
 
    // Connect button signal to appropriate slot
    connect(m_button, &QPushButton::released, this, &MainWindow::handleButton);

    connect(quit, &QAction::triggered, qApp, QApplication::quit);
    connect(scale, &QAction::triggered, qApp, QApplication::quit);
};

void MainWindow::handleButton()
{
  // change the text
  m_button->setText("Example");
  // resize button
  m_button->resize(100,100);
}
