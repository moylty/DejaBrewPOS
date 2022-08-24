#pragma once

#include <QMainWindow>
#include <QPushButton>
#include <QApplication>

class MainWindow : public QMainWindow
{
	public:
		MainWindow(QWidget *parent = nullptr);

	private slots:
  		void handleButton();
	private:
  		QPushButton *m_button;
};
