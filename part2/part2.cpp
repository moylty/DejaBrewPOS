#include <stdio.h>
#include <QtGui>
#include <QApplication>
#include "mainwindow.h"
#include "menu.h"

// This is the 'main' file. It doesn't define a window class,
// but it does control things like the scale and title of that class.

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	MainWindow window;

	window.resize(window.width, window.height);	// setting start size to 500 x 700
	window.setWindowTitle("Deja Brew POS");

	window.show();

	return app.exec();
}
