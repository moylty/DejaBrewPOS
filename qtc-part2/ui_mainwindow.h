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
    QTableWidget *orderTable;
    QLabel *coLabel;
    QLabel *onLabel;
    QLabel *menulabel;
    QListWidget *menuList;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_3;
    QLabel *totalValue;
    QLabel *totalLabel;
    QPushButton *noButton;
    QPushButton *undoButton;
    QLabel *dtValue;
    QLabel *dtLabel;
    QGridLayout *gridLayout_6;
    QPushButton *addOrderButton;
    QLabel *quanLabel;
    QSpinBox *orderQuantity;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(889, 562);
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

        gridLayout->addWidget(orderTable, 5, 5, 1, 1);

        coLabel = new QLabel(centralwidget);
        coLabel->setObjectName(QString::fromUtf8("coLabel"));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        coLabel->setFont(font);

        gridLayout->addWidget(coLabel, 1, 5, 1, 1);

        onLabel = new QLabel(centralwidget);
        onLabel->setObjectName(QString::fromUtf8("onLabel"));

        gridLayout->addWidget(onLabel, 3, 5, 1, 1);

        menulabel = new QLabel(centralwidget);
        menulabel->setObjectName(QString::fromUtf8("menulabel"));
        menulabel->setFont(font);

        gridLayout->addWidget(menulabel, 1, 0, 1, 1);

        menuList = new QListWidget(centralwidget);
        new QListWidgetItem(menuList);
        new QListWidgetItem(menuList);
        new QListWidgetItem(menuList);
        new QListWidgetItem(menuList);
        new QListWidgetItem(menuList);
        menuList->setObjectName(QString::fromUtf8("menuList"));
        QFont font1;
        font1.setPointSize(12);
        menuList->setFont(font1);

        gridLayout->addWidget(menuList, 5, 0, 1, 4);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        totalValue = new QLabel(centralwidget);
        totalValue->setObjectName(QString::fromUtf8("totalValue"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush);
        QBrush brush1(QColor(127, 127, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush1);
        QBrush brush2(QColor(170, 170, 170, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush2);
        QBrush brush3(QColor(85, 170, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush4(QColor(0, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush4);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        QBrush brush5(QColor(35, 35, 35, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        QBrush brush6(QColor(202, 202, 202, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush5);
        QBrush brush7(QColor(160, 160, 160, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        QBrush brush8(QColor(51, 51, 51, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        QBrush brush9(QColor(118, 118, 118, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush9);
        QBrush brush10(QColor(81, 81, 81, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush2);
        QBrush brush11(QColor(240, 240, 240, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush11);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        QBrush brush12(QColor(177, 177, 177, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush12);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        totalValue->setPalette(palette);
        totalValue->setFont(font1);
        totalValue->setAutoFillBackground(true);

        gridLayout_3->addWidget(totalValue, 0, 3, 1, 1);

        totalLabel = new QLabel(centralwidget);
        totalLabel->setObjectName(QString::fromUtf8("totalLabel"));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        totalLabel->setFont(font2);
        totalLabel->setAutoFillBackground(true);
        totalLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(totalLabel, 0, 2, 1, 1);

        noButton = new QPushButton(centralwidget);
        noButton->setObjectName(QString::fromUtf8("noButton"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        QBrush brush13(QColor(0, 167, 250, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush13);
        QBrush brush14(QColor(127, 212, 255, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush14);
        QBrush brush15(QColor(63, 191, 255, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush15);
        QBrush brush16(QColor(0, 85, 127, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush16);
        QBrush brush17(QColor(0, 113, 170, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush17);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush18(QColor(0, 170, 255, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush18);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush4);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        QBrush brush19(QColor(255, 255, 220, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush19);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush4);
        QBrush brush20(QColor(0, 0, 0, 128));
        brush20.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush20);
#endif
        QBrush brush21(QColor(231, 231, 231, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush21);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush21);
        QBrush brush22(QColor(255, 0, 0, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush22);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        QBrush brush23(QColor(0, 0, 0, 102));
        brush23.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush23);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush21);
        QBrush brush24(QColor(0, 0, 0, 128));
        brush24.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush24);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush16);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush16);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush17);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush16);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush16);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush18);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush18);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush23);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush21);
        QBrush brush25(QColor(0, 0, 0, 128));
        brush25.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush25);
#endif
        noButton->setPalette(palette1);
        noButton->setFocusPolicy(Qt::ClickFocus);

        gridLayout_3->addWidget(noButton, 0, 1, 1, 1);

        undoButton = new QPushButton(centralwidget);
        undoButton->setObjectName(QString::fromUtf8("undoButton"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        QBrush brush26(QColor(239, 0, 0, 255));
        brush26.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush26);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush22);
        QBrush brush27(QColor(212, 0, 0, 255));
        brush27.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush27);
        QBrush brush28(QColor(85, 0, 0, 255));
        brush28.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush28);
        QBrush brush29(QColor(113, 0, 0, 255));
        brush29.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush29);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush30(QColor(170, 0, 0, 255));
        brush30.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush30);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush4);
        QBrush brush31(QColor(212, 127, 127, 255));
        brush31.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush31);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush19);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush4);
        QBrush brush32(QColor(255, 255, 255, 128));
        brush32.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush32);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush21);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush26);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush21);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush22);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush23);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush21);
        QBrush brush33(QColor(255, 255, 255, 128));
        brush33.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush33);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush28);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush26);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush22);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush27);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush28);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush29);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush28);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush28);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush30);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush30);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush23);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush21);
        QBrush brush34(QColor(255, 255, 255, 128));
        brush34.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush34);
#endif
        undoButton->setPalette(palette2);
        undoButton->setFocusPolicy(Qt::ClickFocus);

        gridLayout_3->addWidget(undoButton, 0, 0, 1, 1);

        dtValue = new QLabel(centralwidget);
        dtValue->setObjectName(QString::fromUtf8("dtValue"));

        gridLayout_3->addWidget(dtValue, 1, 3, 1, 1);

        dtLabel = new QLabel(centralwidget);
        dtLabel->setObjectName(QString::fromUtf8("dtLabel"));
        dtLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(dtLabel, 1, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 6, 5, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        addOrderButton = new QPushButton(centralwidget);
        addOrderButton->setObjectName(QString::fromUtf8("addOrderButton"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush35(QColor(76, 227, 0, 255));
        brush35.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush35);
        QBrush brush36(QColor(49, 148, 0, 255));
        brush36.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush36);
        QBrush brush37(QColor(41, 123, 0, 255));
        brush37.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush37);
        QBrush brush38(QColor(16, 49, 0, 255));
        brush38.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush38);
        QBrush brush39(QColor(22, 66, 0, 255));
        brush39.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush39);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush4);
        QBrush brush40(QColor(33, 99, 0, 255));
        brush40.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush40);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush4);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush38);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush19);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush4);
        QBrush brush41(QColor(255, 255, 255, 128));
        brush41.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush41);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush21);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush35);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush21);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush22);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush23);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush21);
        QBrush brush42(QColor(255, 255, 255, 128));
        brush42.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush42);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush38);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush35);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush36);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush37);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush38);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush39);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush38);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush38);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush40);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush40);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush23);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush21);
        QBrush brush43(QColor(255, 255, 255, 128));
        brush43.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush43);
#endif
        addOrderButton->setPalette(palette3);

        gridLayout_6->addWidget(addOrderButton, 0, 2, 1, 1);

        quanLabel = new QLabel(centralwidget);
        quanLabel->setObjectName(QString::fromUtf8("quanLabel"));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(false);
        quanLabel->setFont(font3);
        quanLabel->setTextFormat(Qt::PlainText);
        quanLabel->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(quanLabel, 0, 0, 1, 1);

        orderQuantity = new QSpinBox(centralwidget);
        orderQuantity->setObjectName(QString::fromUtf8("orderQuantity"));
        orderQuantity->setMinimum(1);

        gridLayout_6->addWidget(orderQuantity, 0, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_6->addWidget(label, 1, 0, 1, 1);


        gridLayout->addLayout(gridLayout_6, 6, 0, 1, 1);

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
        QTableWidgetItem *___qtablewidgetitem = orderTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Item", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = orderTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Quantity", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = orderTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = orderTable->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        coLabel->setText(QCoreApplication::translate("MainWindow", "Current Order:", nullptr));
        onLabel->setText(QCoreApplication::translate("MainWindow", "Order Number: ", nullptr));
        menulabel->setText(QCoreApplication::translate("MainWindow", "Menu:", nullptr));

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

        totalValue->setText(QCoreApplication::translate("MainWindow", "$0.00", nullptr));
        totalLabel->setText(QCoreApplication::translate("MainWindow", "Total:", nullptr));
        noButton->setText(QCoreApplication::translate("MainWindow", "Next Order", nullptr));
        undoButton->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        dtValue->setText(QCoreApplication::translate("MainWindow", "$0.00", nullptr));
        dtLabel->setText(QCoreApplication::translate("MainWindow", "Daily Total:", nullptr));
        addOrderButton->setText(QCoreApplication::translate("MainWindow", "Add to Order", nullptr));
        quanLabel->setText(QCoreApplication::translate("MainWindow", "Quantity:", nullptr));
        label->setText(QString());
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
