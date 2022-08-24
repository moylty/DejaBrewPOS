#pragma once

#include <QMainWindow>
#include <QPushButton>
#include <QApplication>

// this file defines the main window, a class used in both .cpp files.

class MainWindow : public QMainWindow
{
	public:
		MainWindow(QWidget *parent = nullptr);

	private slots:
  		void handleButton();
	private:
  		QPushButton *m_button;
};
