/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionFullscreen;
    QAction *actionAbout;
    QWidget *centralwidget;
    QListWidget *menuList;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(886, 674);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionFullscreen = new QAction(MainWindow);
        actionFullscreen->setObjectName(QString::fromUtf8("actionFullscreen"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        menuList = new QListWidget(centralwidget);
        new QListWidgetItem(menuList);
        new QListWidgetItem(menuList);
        new QListWidgetItem(menuList);
        new QListWidgetItem(menuList);
        new QListWidgetItem(menuList);
        menuList->setObjectName(QString::fromUtf8("menuList"));
        menuList->setGeometry(QRect(10, 10, 571, 621));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 886, 19));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionQuit);
        menuView->addAction(actionFullscreen);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        actionFullscreen->setText(QCoreApplication::translate("MainWindow", "Toggle Fullscreen", nullptr));
#if QT_CONFIG(shortcut)
        actionFullscreen->setShortcut(QCoreApplication::translate("MainWindow", "F11", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));

        const bool __sortingEnabled = menuList->isSortingEnabled();
        menuList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = menuList->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "Flat White", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = menuList->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "Cappuccino", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = menuList->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainWindow", "Expresso", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = menuList->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("MainWindow", "Long Black", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = menuList->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("MainWindow", "Macchiato", nullptr));
        menuList->setSortingEnabled(__sortingEnabled);

        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
