#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    float scale = 1.0;
    int width = 700, height = 500;
    int orderNum = 1;
    int rCount = 0;
    int quantityValue;
    float prices[5] = {4.50, 4.70, 3.50, 4.00, 5.00};

private:
    Ui::MainWindow *ui;

private slots:

        void on_actionQuit_triggered();
        void on_actionAbout_triggered();
        void on_actionFullscreen_triggered();
        void addToOrder();
};
#endif // MAINWINDOW_H
