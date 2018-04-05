#include "sharedfilesclient.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SharedFilesClient w;
    w.show();

    return a.exec();
}
