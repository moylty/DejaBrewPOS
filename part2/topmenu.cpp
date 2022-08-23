#include <QMenu>
#include <QMenuBar>
#include "topmenu.h"

TopMenu::TopMenu(QWidget *parent)
    : QMainWindow(parent) {

    auto *quit = new QAction("&Quit", this);

    QMenu *file = menuBar()->addMenu("&File");
    file -> addAction(quit);

    connect(quit, &QAction::triggered, qApp, QApplication::quit);
};