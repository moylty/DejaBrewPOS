/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
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
    QAction *actionNext_Order;
    QAction *actionUndo;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *coLabel;
    QTableWidget *orderTable;
    QPushButton *addOrderButton;
    QLabel *menulabel;
    QLabel *onLabel;
    QSpinBox *orderQuantity;
    QLabel *quanLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *undoButton;
    QPushButton *noButton;
    QLabel *totalLabel;
    QLabel *totalValue;
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
        MainWindow->resize(889, 713);
        MainWindow->setMinimumSize(QSize(600, 300));
        QIcon icon;
        icon.addFile(QString::fromUtf8("img/coffee-icon.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionFullscreen = new QAction(MainWindow);
        actionFullscreen->setObjectName(QString::fromUtf8("actionFullscreen"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionNext_Order = new QAction(MainWindow);
        actionNext_Order->setObjectName(QString::fromUtf8("actionNext_Order"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        coLabel = new QLabel(centralwidget);
        coLabel->setObjectName(QString::fromUtf8("coLabel"));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        coLabel->setFont(font);

        gridLayout->addWidget(coLabel, 1, 7, 1, 1);

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
        orderTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

        gridLayout->addWidget(orderTable, 5, 7, 1, 1);

        addOrderButton = new QPushButton(centralwidget);
        addOrderButton->setObjectName(QString::fromUtf8("addOrderButton"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(33, 99, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(49, 148, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(41, 123, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(16, 49, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(22, 66, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush8(QColor(231, 231, 231, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush8);
        QBrush brush9(QColor(35, 35, 35, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        QBrush brush10(QColor(202, 202, 202, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush9);
        QBrush brush11(QColor(160, 160, 160, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush8);
        QBrush brush12(QColor(255, 0, 0, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush12);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush8);
        QBrush brush13(QColor(51, 51, 51, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush13);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        QBrush brush14(QColor(118, 118, 118, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush14);
        QBrush brush15(QColor(81, 81, 81, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        QBrush brush16(QColor(0, 0, 0, 102));
        brush16.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush16);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush17(QColor(177, 177, 177, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush17);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush16);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush8);
        addOrderButton->setPalette(palette);

        gridLayout->addWidget(addOrderButton, 7, 2, 1, 1);

        menulabel = new QLabel(centralwidget);
        menulabel->setObjectName(QString::fromUtf8("menulabel"));
        menulabel->setFont(font);

        gridLayout->addWidget(menulabel, 1, 0, 1, 1);

        onLabel = new QLabel(centralwidget);
        onLabel->setObjectName(QString::fromUtf8("onLabel"));

        gridLayout->addWidget(onLabel, 3, 7, 1, 1);

        orderQuantity = new QSpinBox(centralwidget);
        orderQuantity->setObjectName(QString::fromUtf8("orderQuantity"));
        orderQuantity->setMinimum(1);

        gridLayout->addWidget(orderQuantity, 7, 1, 1, 1);

        quanLabel = new QLabel(centralwidget);
        quanLabel->setObjectName(QString::fromUtf8("quanLabel"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        quanLabel->setFont(font1);
        quanLabel->setTextFormat(Qt::PlainText);
        quanLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(quanLabel, 7, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        undoButton = new QPushButton(centralwidget);
        undoButton->setObjectName(QString::fromUtf8("undoButton"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush18(QColor(170, 0, 0, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush18);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush12);
        QBrush brush19(QColor(212, 0, 0, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush19);
        QBrush brush20(QColor(85, 0, 0, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush20);
        QBrush brush21(QColor(113, 0, 0, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush21);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush18);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush22(QColor(212, 127, 127, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush22);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush16);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush20);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush18);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush19);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush21);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush20);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush20);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush18);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush18);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush17);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush16);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush8);
        undoButton->setPalette(palette1);
        undoButton->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout->addWidget(undoButton);

        noButton = new QPushButton(centralwidget);
        noButton->setObjectName(QString::fromUtf8("noButton"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush23(QColor(0, 89, 134, 255));
        brush23.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush23);
        QBrush brush24(QColor(127, 212, 255, 255));
        brush24.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush24);
        QBrush brush25(QColor(63, 191, 255, 255));
        brush25.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush25);
        QBrush brush26(QColor(0, 85, 127, 255));
        brush26.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush26);
        QBrush brush27(QColor(0, 113, 170, 255));
        brush27.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush27);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush28(QColor(0, 170, 255, 255));
        brush28.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush28);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush24);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush26);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush23);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush24);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush25);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush26);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush27);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush26);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush26);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush28);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush28);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush17);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush8);
        noButton->setPalette(palette2);
        noButton->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout->addWidget(noButton);

        totalLabel = new QLabel(centralwidget);
        totalLabel->setObjectName(QString::fromUtf8("totalLabel"));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        totalLabel->setFont(font2);
        totalLabel->setAutoFillBackground(true);
        totalLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(totalLabel);

        totalValue = new QLabel(centralwidget);
        totalValue->setObjectName(QString::fromUtf8("totalValue"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush);
        QBrush brush29(QColor(127, 127, 127, 255));
        brush29.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush29);
        QBrush brush30(QColor(170, 170, 170, 255));
        brush30.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush30);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush29);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush30);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush17);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        totalValue->setPalette(palette3);
        QFont font3;
        font3.setPointSize(12);
        totalValue->setFont(font3);
        totalValue->setAutoFillBackground(true);

        horizontalLayout->addWidget(totalValue);


        gridLayout->addLayout(horizontalLayout, 7, 7, 1, 1);

        menuList = new QListWidget(centralwidget);
        new QListWidgetItem(menuList);
        new QListWidgetItem(menuList);
        new QListWidgetItem(menuList);
        new QListWidgetItem(menuList);
        new QListWidgetItem(menuList);
        menuList->setObjectName(QString::fromUtf8("menuList"));
        menuList->setFont(font3);

        gridLayout->addWidget(menuList, 5, 0, 1, 5);

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
        menuFile->addAction(actionNext_Order);
        menuFile->addSeparator();
        menuFile->addAction(actionUndo);
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
        actionNext_Order->setText(QCoreApplication::translate("MainWindow", "Next Order", nullptr));
#if QT_CONFIG(shortcut)
        actionNext_Order->setShortcut(QCoreApplication::translate("MainWindow", "N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        coLabel->setText(QCoreApplication::translate("MainWindow", "Current Order:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = orderTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Item", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = orderTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Quantity", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = orderTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = orderTable->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        addOrderButton->setText(QCoreApplication::translate("MainWindow", "Add to Order", nullptr));
        menulabel->setText(QCoreApplication::translate("MainWindow", "Menu:", nullptr));
        onLabel->setText(QCoreApplication::translate("MainWindow", "Order Number: ", nullptr));
        quanLabel->setText(QCoreApplication::translate("MainWindow", "Quantity:", nullptr));
        undoButton->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        noButton->setText(QCoreApplication::translate("MainWindow", "Next Order", nullptr));
        totalLabel->setText(QCoreApplication::translate("MainWindow", "Total:", nullptr));
        totalValue->setText(QCoreApplication::translate("MainWindow", "$0.00", nullptr));

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
