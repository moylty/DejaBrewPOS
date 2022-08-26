#pragma once

#include <QMainWindow>
#include <QPushButton>
#include <QApplication>
#include <QSpinBox>

// this file defines the main window, a class used in both .cpp files.

class MainWindow : public QMainWindow
{
	public:
		MainWindow(QWidget *parent = nullptr);
		float scale = 1.0;
		int width = 700, height = 500;

	private slots:

		void scale1x();
		void scale2x();
		void scale3x();
		void scale4x();

		void aboutDJPdialog();

};
