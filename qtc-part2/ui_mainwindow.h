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
#include <QtWidgets/QHBoxLayout>
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
    QLabel *menulabel;
    QSpinBox *orderQuantity;
    QLabel *quanLabel;
    QTableWidget *orderTable;
    QLabel *coLabel;
    QListWidget *menuList;
    QPushButton *addOrderButton;
    QLabel *onLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *totalLabel;
    QLabel *totalValue;
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
        menulabel = new QLabel(centralwidget);
        menulabel->setObjectName(QString::fromUtf8("menulabel"));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        menulabel->setFont(font);

        gridLayout->addWidget(menulabel, 0, 0, 1, 1);

        orderQuantity = new QSpinBox(centralwidget);
        orderQuantity->setObjectName(QString::fromUtf8("orderQuantity"));

        gridLayout->addWidget(orderQuantity, 5, 1, 1, 1);

        quanLabel = new QLabel(centralwidget);
        quanLabel->setObjectName(QString::fromUtf8("quanLabel"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        quanLabel->setFont(font1);
        quanLabel->setTextFormat(Qt::PlainText);
        quanLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(quanLabel, 5, 0, 1, 1);

        orderTable = new QTableWidget(centralwidget);
        if (orderTable->columnCount() < 3)
            orderTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        orderTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        orderTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        orderTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (orderTable->rowCount() < 1)
            orderTable->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        orderTable->setVerticalHeaderItem(0, __qtablewidgetitem3);
        orderTable->setObjectName(QString::fromUtf8("orderTable"));
        orderTable->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(orderTable, 3, 7, 1, 1);

        coLabel = new QLabel(centralwidget);
        coLabel->setObjectName(QString::fromUtf8("coLabel"));
        coLabel->setFont(font);

        gridLayout->addWidget(coLabel, 0, 7, 1, 1);

        menuList = new QListWidget(centralwidget);
        new QListWidgetItem(menuList);
        new QListWidgetItem(menuList);
        new QListWidgetItem(menuList);
        new QListWidgetItem(menuList);
        new QListWidgetItem(menuList);
        menuList->setObjectName(QString::fromUtf8("menuList"));
        QFont font2;
        font2.setPointSize(12);
        menuList->setFont(font2);

        gridLayout->addWidget(menuList, 3, 0, 1, 5);

        addOrderButton = new QPushButton(centralwidget);
        addOrderButton->setObjectName(QString::fromUtf8("addOrderButton"));

        gridLayout->addWidget(addOrderButton, 5, 2, 1, 1);

        onLabel = new QLabel(centralwidget);
        onLabel->setObjectName(QString::fromUtf8("onLabel"));

        gridLayout->addWidget(onLabel, 1, 7, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        totalLabel = new QLabel(centralwidget);
        totalLabel->setObjectName(QString::fromUtf8("totalLabel"));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        totalLabel->setFont(font3);
        totalLabel->setAutoFillBackground(true);
        totalLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(totalLabel);

        totalValue = new QLabel(centralwidget);
        totalValue->setObjectName(QString::fromUtf8("totalValue"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush5(QColor(231, 231, 231, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        QBrush brush6(QColor(35, 35, 35, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        QBrush brush7(QColor(202, 202, 202, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        QBrush brush8(QColor(160, 160, 160, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        QBrush brush9(QColor(255, 0, 0, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        QBrush brush10(QColor(51, 51, 51, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        QBrush brush11(QColor(118, 118, 118, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush11);
        QBrush brush12(QColor(81, 81, 81, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush12);
        QBrush brush13(QColor(0, 0, 0, 102));
        brush13.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush13);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush14(QColor(177, 177, 177, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush14);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush12);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush13);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush5);
        totalValue->setPalette(palette);
        totalValue->setFont(font2);
        totalValue->setAutoFillBackground(true);

        horizontalLayout->addWidget(totalValue);


        gridLayout->addLayout(horizontalLayout, 5, 7, 1, 1);

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
        QWidget::setTabOrder(menuList, orderQuantity);
        QWidget::setTabOrder(orderQuantity, addOrderButton);

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
        menulabel->setText(QCoreApplication::translate("MainWindow", "Menu:", nullptr));
        quanLabel->setText(QCoreApplication::translate("MainWindow", "Quantity:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = orderTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Item", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = orderTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Quantity", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = orderTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = orderTable->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        coLabel->setText(QCoreApplication::translate("MainWindow", "Current Order:", nullptr));

        const bool __sortingEnabled = menuList->isSortingEnabled();
        menuList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = menuList->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "Flat White        $4.50", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = menuList->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "Cappuccino      $4.70", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = menuList->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainWindow", "Expresso          $3.50", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = menuList->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("MainWindow", "Long Black       $4.00", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = menuList->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("MainWindow", "Macchiato        $5.00", nullptr));
        menuList->setSortingEnabled(__sortingEnabled);

        addOrderButton->setText(QCoreApplication::translate("MainWindow", "Add to Order", nullptr));
        onLabel->setText(QCoreApplication::translate("MainWindow", "Order Number: ", nullptr));
        totalLabel->setText(QCoreApplication::translate("MainWindow", "Total:", nullptr));
        totalValue->setText(QCoreApplication::translate("MainWindow", "$0.00", nullptr));
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
