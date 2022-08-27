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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
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
    QListWidget *orderList;
    QSpinBox *orderQuantity;
    QLabel *coLabel;
    QPushButton *addOrderButton;
    QTableWidget *menuTable;
    QLabel *quanLabel;
    QLabel *onLabel;
    QLabel *menulabel;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(889, 713);
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
        orderList = new QListWidget(centralwidget);
        orderList->setObjectName(QString::fromUtf8("orderList"));
        QFont font;
        font.setPointSize(12);
        orderList->setFont(font);
        orderList->setSelectionMode(QAbstractItemView::NoSelection);
        orderList->setSelectionRectVisible(false);

        gridLayout->addWidget(orderList, 3, 7, 1, 1);

        orderQuantity = new QSpinBox(centralwidget);
        orderQuantity->setObjectName(QString::fromUtf8("orderQuantity"));

        gridLayout->addWidget(orderQuantity, 5, 2, 1, 1);

        coLabel = new QLabel(centralwidget);
        coLabel->setObjectName(QString::fromUtf8("coLabel"));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        coLabel->setFont(font1);

        gridLayout->addWidget(coLabel, 0, 7, 1, 1);

        addOrderButton = new QPushButton(centralwidget);
        addOrderButton->setObjectName(QString::fromUtf8("addOrderButton"));

        gridLayout->addWidget(addOrderButton, 5, 3, 1, 1);

        menuTable = new QTableWidget(centralwidget);
        if (menuTable->columnCount() < 2)
            menuTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        menuTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        menuTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (menuTable->rowCount() < 5)
            menuTable->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        menuTable->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        menuTable->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        menuTable->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        menuTable->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        menuTable->setVerticalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        menuTable->setItem(0, 0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        menuTable->setItem(0, 1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        menuTable->setItem(1, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        menuTable->setItem(1, 1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        menuTable->setItem(2, 0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        menuTable->setItem(2, 1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        menuTable->setItem(3, 0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        menuTable->setItem(3, 1, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        menuTable->setItem(4, 0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        menuTable->setItem(4, 1, __qtablewidgetitem16);
        menuTable->setObjectName(QString::fromUtf8("menuTable"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(menuTable->sizePolicy().hasHeightForWidth());
        menuTable->setSizePolicy(sizePolicy);

        gridLayout->addWidget(menuTable, 3, 1, 1, 3, Qt::AlignRight);

        quanLabel = new QLabel(centralwidget);
        quanLabel->setObjectName(QString::fromUtf8("quanLabel"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        quanLabel->setFont(font2);
        quanLabel->setTextFormat(Qt::PlainText);
        quanLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(quanLabel, 5, 1, 1, 1);

        onLabel = new QLabel(centralwidget);
        onLabel->setObjectName(QString::fromUtf8("onLabel"));

        gridLayout->addWidget(onLabel, 1, 7, 1, 1);

        menulabel = new QLabel(centralwidget);
        menulabel->setObjectName(QString::fromUtf8("menulabel"));
        menulabel->setFont(font1);

        gridLayout->addWidget(menulabel, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 889, 19));
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
        coLabel->setText(QCoreApplication::translate("MainWindow", "Current Order:", nullptr));
        addOrderButton->setText(QCoreApplication::translate("MainWindow", "Add to Order", nullptr));
        QTableWidgetItem *___qtablewidgetitem = menuTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Item", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = menuTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = menuTable->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = menuTable->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = menuTable->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = menuTable->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = menuTable->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "5", nullptr));

        const bool __sortingEnabled = menuTable->isSortingEnabled();
        menuTable->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem7 = menuTable->item(0, 0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Flat White", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = menuTable->item(0, 1);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "4.50", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = menuTable->item(1, 0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "Cappuccino", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = menuTable->item(1, 1);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "4.70", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = menuTable->item(2, 0);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "Expresso", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = menuTable->item(2, 1);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "3.50", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = menuTable->item(3, 0);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "Long Black", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = menuTable->item(3, 1);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "4.00", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = menuTable->item(4, 0);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "Macchiato", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = menuTable->item(4, 1);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "5.00", nullptr));
        menuTable->setSortingEnabled(__sortingEnabled);

        quanLabel->setText(QCoreApplication::translate("MainWindow", "Quantity:", nullptr));
        onLabel->setText(QCoreApplication::translate("MainWindow", "Order Number: ", nullptr));
        menulabel->setText(QCoreApplication::translate("MainWindow", "Menu:", nullptr));
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
