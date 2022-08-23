//#include <QApplication>
//#include <QWidget>
//#include <QMenu>
//#include <QMenuBar>
#include "topmenu.h"

int main(int argc, char *argv[])
{
	int width = 350, height = 250;

	QApplication app(argc, argv);

	TopMenu window;

	window.resize(width, height);
	window.setWindowTitle("Deja Brew POS");
	window.show();

	return app.exec();
}