#include "mainwindow.h"
#include <QDebug>
#include <QApplication>
#include "./gameobject.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qDebug() << "Hello Frogger!";

    GameObject *gameObject = new GameObject(10, 11.5, 12, 13.5);

    qDebug() << "x: " << gameObject->getX();
    qDebug() << "y: " << gameObject->getY();
    qDebug() << "width: " << gameObject->getWidth();
    qDebug() << "height: " << gameObject->getHeight();

    MainWindow w;
    w.show();

    delete gameObject;

    return a.exec();
}
