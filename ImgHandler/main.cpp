//#include "ImgHandler.h"
#include <QtWidgets/QApplication>
#include "MainWidget.h"

class MainWidget;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    ImgHandler w;
	MainWidget w;
    w.show();
    return a.exec();
}
