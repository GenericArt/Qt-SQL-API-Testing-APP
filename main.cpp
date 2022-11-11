#include <QApplication>
#include <QPushButton>
#include "Interface/interface.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    QMainWindow mainWindow;
    Ui::MainWindow ui;
    ui.setupUi(&mainWindow);

    mainWindow.show();

    return QApplication::exec();
}
