#include "./View/mainwindow.h"
#include <QApplication>
#include "./ViewModel/MainWindowController.h"
#include "./Model/Data.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Data model;
    MainWindowController viewModel(&model);
    MainWindow w(&viewModel);
    w.show();

    return a.exec();
}
