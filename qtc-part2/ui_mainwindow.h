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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
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
    QGridLayout *gridLayout;
    QSpinBox *orderQuantity;
    QListWidget *orderList;
    QPushButton *addOrderButton;
    QLabel *menulabel;
    QLabel *onLabel;
    QListWidget *menuList;
    QLabel *quanLabel;
    QLabel *coLabel;
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
        MainWindow->setMinimumSize(QSize(600, 300));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionFullscreen = new QAction(MainWindow);
        actionFullscreen->setObjectName(QString::fromUtf8("actionFullscreen"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        orderQuantity = new QSpinBox(centralwidget);
        orderQuantity->setObjectName(QString::fromUtf8("orderQuantity"));

        gridLayout->addWidget(orderQuantity, 4, 2, 1, 1);

        orderList = new QListWidget(centralwidget);
        orderList->setObjectName(QString::fromUtf8("orderList"));
        QFont font;
        font.setPointSize(12);
        orderList->setFont(font);
        orderList->setSelectionMode(QAbstractItemView::NoSelection);
        orderList->setSelectionRectVisible(false);

        gridLayout->addWidget(orderList, 3, 4, 1, 1);

        addOrderButton = new QPushButton(centralwidget);
        addOrderButton->setObjectName(QString::fromUtf8("addOrderButton"));

        gridLayout->addWidget(addOrderButton, 4, 3, 1, 1);

        menulabel = new QLabel(centralwidget);
        menulabel->setObjectName(QString::fromUtf8("menulabel"));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        menulabel->setFont(font1);

        gridLayout->addWidget(menulabel, 0, 1, 1, 1);

        onLabel = new QLabel(centralwidget);
        onLabel->setObjectName(QString::fromUtf8("onLabel"));

        gridLayout->addWidget(onLabel, 1, 4, 1, 1);

        menuList = new QListWidget(centralwidget);
        new QListWidgetItem(menuList);
        new QListWidgetItem(menuList);
        new QListWidgetItem(menuList);
        new QListWidgetItem(menuList);
        new QListWidgetItem(menuList);
        menuList->setObjectName(QString::fromUtf8("menuList"));
        menuList->setFont(font);

        gridLayout->addWidget(menuList, 3, 1, 1, 3);

        quanLabel = new QLabel(centralwidget);
        quanLabel->setObjectName(QString::fromUtf8("quanLabel"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        quanLabel->setFont(font2);
        quanLabel->setTextFormat(Qt::PlainText);
        quanLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(quanLabel, 4, 1, 1, 1);

        coLabel = new QLabel(centralwidget);
        coLabel->setObjectName(QString::fromUtf8("coLabel"));
        coLabel->setFont(font1);

        gridLayout->addWidget(coLabel, 0, 4, 1, 1);

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
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "DejaBrew POS", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        actionFullscreen->setText(QCoreApplication::translate("MainWindow", "Toggle Fullscreen", nullptr));
#if QT_CONFIG(shortcut)
        actionFullscreen->setShortcut(QCoreApplication::translate("MainWindow", "F11", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        addOrderButton->setText(QCoreApplication::translate("MainWindow", "Add to Order", nullptr));
        menulabel->setText(QCoreApplication::translate("MainWindow", "Menu:", nullptr));
        onLabel->setText(QCoreApplication::translate("MainWindow", "Order Number: ", nullptr));

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

        quanLabel->setText(QCoreApplication::translate("MainWindow", "Quantity:", nullptr));
        coLabel->setText(QCoreApplication::translate("MainWindow", "Current Order:", nullptr));
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
