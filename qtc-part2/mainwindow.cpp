#include <QMenu>
#include <QMenuBar>
#include <QtWidgets>
#include <QPushButton>
#include <QFormLayout>
#include <QShortcut>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //QShortcut *shortcut = new QShortcut(QKeySequence("Ctrl+O"), parent);
    //QObject::connect(shortcut, SIGNAL(activated()), this, SLOT(on_actionFullscreen_triggered()));
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

