/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
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
    QLabel *menulabel;
    QTableWidget *orderTable;
    QLabel *quanLabel;
    QSpinBox *orderQuantity;
    QLabel *onLabel;
    QLabel *coLabel;
    QPushButton *addOrderButton;
    QListWidget *menuList;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *undoButton;
    QPushButton *noButton;
    QLabel *totalLabel;
    QLabel *totalValue;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *invB1;
    QPushButton *invB2;
    QLabel *dtLabel;
    QLabel *dtValue;
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
        menulabel = new QLabel(centralwidget);
        menulabel->setObjectName(QString::fromUtf8("menulabel"));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        menulabel->setFont(font);

        gridLayout->addWidget(menulabel, 1, 0, 1, 1);

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

        gridLayout->addWidget(orderTable, 5, 6, 1, 1);

        quanLabel = new QLabel(centralwidget);
        quanLabel->setObjectName(QString::fromUtf8("quanLabel"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        quanLabel->setFont(font1);
        quanLabel->setTextFormat(Qt::PlainText);
        quanLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(quanLabel, 6, 0, 1, 1);

        orderQuantity = new QSpinBox(centralwidget);
        orderQuantity->setObjectName(QString::fromUtf8("orderQuantity"));
        orderQuantity->setMinimum(1);

        gridLayout->addWidget(orderQuantity, 6, 1, 1, 1);

        onLabel = new QLabel(centralwidget);
        onLabel->setObjectName(QString::fromUtf8("onLabel"));

        gridLayout->addWidget(onLabel, 3, 6, 1, 1);

        coLabel = new QLabel(centralwidget);
        coLabel->setObjectName(QString::fromUtf8("coLabel"));
        coLabel->setFont(font);

        gridLayout->addWidget(coLabel, 1, 6, 1, 1);

        addOrderButton = new QPushButton(centralwidget);
        addOrderButton->setObjectName(QString::fromUtf8("addOrderButton"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(76, 227, 0, 255));
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
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        QBrush brush7(QColor(33, 99, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush9(QColor(255, 255, 255, 128));
        brush9.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        QBrush brush10(QColor(231, 231, 231, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        QBrush brush11(QColor(202, 202, 202, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        QBrush brush12(QColor(35, 35, 35, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        QBrush brush13(QColor(160, 160, 160, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        QBrush brush14(QColor(255, 0, 0, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush14);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        QBrush brush15(QColor(51, 51, 51, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush15);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush15);
        QBrush brush16(QColor(118, 118, 118, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush16);
        QBrush brush17(QColor(81, 81, 81, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush17);
        QBrush brush18(QColor(0, 0, 0, 102));
        brush18.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush18);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush10);
        QBrush brush19(QColor(255, 255, 255, 128));
        brush19.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush19);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        QBrush brush20(QColor(177, 177, 177, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush20);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush17);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush18);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush10);
        QBrush brush21(QColor(255, 255, 255, 128));
        brush21.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush21);
#endif
        addOrderButton->setPalette(palette);

        gridLayout->addWidget(addOrderButton, 6, 2, 1, 1);

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

        gridLayout->addWidget(menuList, 5, 0, 1, 5);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        undoButton = new QPushButton(centralwidget);
        undoButton->setObjectName(QString::fromUtf8("undoButton"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush22(QColor(239, 0, 0, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush22);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush14);
        QBrush brush23(QColor(212, 0, 0, 255));
        brush23.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush23);
        QBrush brush24(QColor(85, 0, 0, 255));
        brush24.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush24);
        QBrush brush25(QColor(113, 0, 0, 255));
        brush25.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush25);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush26(QColor(170, 0, 0, 255));
        brush26.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush26);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush27(QColor(212, 127, 127, 255));
        brush27.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush27);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush28(QColor(255, 255, 255, 128));
        brush28.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush28);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush22);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush15);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush15);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush16);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush17);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush18);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush10);
        QBrush brush29(QColor(255, 255, 255, 128));
        brush29.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush29);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush24);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush22);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush23);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush24);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush25);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush24);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush24);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush26);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush26);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush20);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush17);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush18);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush10);
        QBrush brush30(QColor(255, 255, 255, 128));
        brush30.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush30);
#endif
        undoButton->setPalette(palette1);
        undoButton->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout->addWidget(undoButton);

        noButton = new QPushButton(centralwidget);
        noButton->setObjectName(QString::fromUtf8("noButton"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush31(QColor(0, 167, 250, 255));
        brush31.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush31);
        QBrush brush32(QColor(127, 212, 255, 255));
        brush32.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush32);
        QBrush brush33(QColor(63, 191, 255, 255));
        brush33.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush33);
        QBrush brush34(QColor(0, 85, 127, 255));
        brush34.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush34);
        QBrush brush35(QColor(0, 113, 170, 255));
        brush35.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush35);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush36(QColor(0, 170, 255, 255));
        brush36.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush36);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush32);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush37(QColor(0, 0, 0, 128));
        brush37.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush37);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush31);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush15);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush15);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush17);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush18);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush10);
        QBrush brush38(QColor(0, 0, 0, 128));
        brush38.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush38);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush34);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush31);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush32);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush33);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush34);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush35);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush34);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush34);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush36);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush36);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush20);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush17);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush18);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush10);
        QBrush brush39(QColor(0, 0, 0, 128));
        brush39.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush39);
#endif
        noButton->setPalette(palette2);
        noButton->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout->addWidget(noButton);

        totalLabel = new QLabel(centralwidget);
        totalLabel->setObjectName(QString::fromUtf8("totalLabel"));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        totalLabel->setFont(font3);
        totalLabel->setAutoFillBackground(true);
        totalLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(totalLabel);

        totalValue = new QLabel(centralwidget);
        totalValue->setObjectName(QString::fromUtf8("totalValue"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush);
        QBrush brush40(QColor(127, 127, 127, 255));
        brush40.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush40);
        QBrush brush41(QColor(170, 170, 170, 255));
        brush41.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush41);
        QBrush brush42(QColor(85, 170, 255, 255));
        brush42.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush42);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush42);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush15);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush16);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush17);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush40);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush41);
        QBrush brush43(QColor(240, 240, 240, 255));
        brush43.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush43);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush20);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush17);
        totalValue->setPalette(palette3);
        totalValue->setFont(font2);
        totalValue->setAutoFillBackground(true);

        horizontalLayout->addWidget(totalValue);


        gridLayout_2->addLayout(horizontalLayout, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        invB1 = new QPushButton(centralwidget);
        invB1->setObjectName(QString::fromUtf8("invB1"));

        horizontalLayout_2->addWidget(invB1);

        invB2 = new QPushButton(centralwidget);
        invB2->setObjectName(QString::fromUtf8("invB2"));

        horizontalLayout_2->addWidget(invB2);

        dtLabel = new QLabel(centralwidget);
        dtLabel->setObjectName(QString::fromUtf8("dtLabel"));
        dtLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(dtLabel);

        dtValue = new QLabel(centralwidget);
        dtValue->setObjectName(QString::fromUtf8("dtValue"));

        horizontalLayout_2->addWidget(dtValue);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 6, 6, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 889, 21));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "DejaBrew POS", nullptr));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", nullptr));
        actionFullscreen->setText(QApplication::translate("MainWindow", "Toggle Fullscreen", nullptr));
#ifndef QT_NO_SHORTCUT
        actionFullscreen->setShortcut(QApplication::translate("MainWindow", "F11", nullptr));
#endif // QT_NO_SHORTCUT
        actionAbout->setText(QApplication::translate("MainWindow", "About", nullptr));
        actionNext_Order->setText(QApplication::translate("MainWindow", "Next Order", nullptr));
#ifndef QT_NO_SHORTCUT
        actionNext_Order->setShortcut(QApplication::translate("MainWindow", "N", nullptr));
#endif // QT_NO_SHORTCUT
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_NO_SHORTCUT
        menulabel->setText(QApplication::translate("MainWindow", "Menu:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = orderTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Item", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = orderTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Quantity", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = orderTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = orderTable->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "1", nullptr));
        quanLabel->setText(QApplication::translate("MainWindow", "Quantity:", nullptr));
        onLabel->setText(QApplication::translate("MainWindow", "Order Number: ", nullptr));
        coLabel->setText(QApplication::translate("MainWindow", "Current Order:", nullptr));
        addOrderButton->setText(QApplication::translate("MainWindow", "Add to Order", nullptr));

        const bool __sortingEnabled = menuList->isSortingEnabled();
        menuList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = menuList->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "Flat White        $4.50", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = menuList->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "Cappuccino      $4.70", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = menuList->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "Expresso          $3.50", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = menuList->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindow", "Long Black       $4.00", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = menuList->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWindow", "Macchiato        $5.00", nullptr));
        menuList->setSortingEnabled(__sortingEnabled);

        undoButton->setText(QApplication::translate("MainWindow", "Undo", nullptr));
        noButton->setText(QApplication::translate("MainWindow", "Next Order", nullptr));
        totalLabel->setText(QApplication::translate("MainWindow", "Total:", nullptr));
        totalValue->setText(QApplication::translate("MainWindow", "$0.00", nullptr));
        invB1->setText(QString());
        invB2->setText(QString());
        dtLabel->setText(QApplication::translate("MainWindow", "Daily Total:", nullptr));
        dtValue->setText(QApplication::translate("MainWindow", "$0.00", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuView->setTitle(QApplication::translate("MainWindow", "View", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
