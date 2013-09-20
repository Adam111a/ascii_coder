#include <QtGui/QApplication>
#include "asciicoder.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    asciiCoder w;
    w.show();
    
    return a.exec();
}
