#include "topmenu.h"

int main(int argc, char *argv[])
{
	int scale = 1;
	int width = 700 * scale, height = 500 * scale;

	QApplication app(argc, argv);

	TopMenu window;

	window.resize(width, height);
	window.setWindowTitle("Deja Brew POS");
	window.show();

	return app.exec();
}
