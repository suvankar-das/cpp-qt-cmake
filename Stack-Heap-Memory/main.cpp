#include <QCoreApplication>
#include "house.h"
#include<QDebug>


void doStuff(){
    // stack memory
    // House h1(nullptr,"First House");
    // h1.printInfo();




    // heap memory
    House* ptr_house = new House(nullptr,"Heap House");
    ptr_house->printInfo();
    // first run with comment below line
    //delete ptr_house;
}




int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    doStuff();

    qDebug() << "Done !";
    return a.exec();
}


