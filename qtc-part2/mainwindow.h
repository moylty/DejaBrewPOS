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

private:
    Ui::MainWindow *ui;

private slots:

        void scale1x();
        void scale2x();
        void scale3x();
        void scale4x();

        void aboutDJPdialog();

};
#endif // MAINWINDOW_H
