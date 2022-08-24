#include <QMenu>
#include <QMenuBar>
#include <QtWidgets>
#include "topmenu.h"

int scale = 1;

TopMenu::TopMenu(QWidget *parent)
    : QMainWindow(parent) {

    auto *quit = new QAction("&Quit", this);
    auto *scale = new QAction("&Scale", this);

    QMenu *file = menuBar()->addMenu("&File");
    QMenu *view = menuBar()->addMenu("&View");
    file -> addAction(quit);
    view -> addAction(scale);

    connect(quit, &QAction::triggered, qApp, QApplication::quit);
    connect(scale, &QAction::triggered, qApp, QApplication::quit);
};
