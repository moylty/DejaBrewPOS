#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[])
{
	int windowScale = 1;
	int width = 250 * windowScale, height = 150 * windowScale;

	QApplication app(argc, argv);

	QWidget *baseWidget = new QWidget();
	baseWidget -> setGeometry(0, 0, width, height);

	QPalette pal = QPalette();
	pal.setColor(QPalette::Window, Qt::blue);

	baseWidget -> setAutoFillBackground(true);
	baseWidget -> setPalette(pal);
	baseWidget -> show();

	return app.exec();
}
