#include <QApplication>
#include "movieflixwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MovieFlixWindow *a = new MovieFlixWindow();
    return app.exec();
}

