#include "controller.hpp"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HawkTracer::viewer::Controller controller;
    controller.run();

    return a.exec();
}
