#include "house.h"
#include <QDebug>

House::House(QObject *parent, const QString &description)
    :QObject(parent),_houseDescription(description)
{
    qDebug() <<"House object constructed";
}

House::~House()
{
    qDebug() <<"House object :" << _houseDescription <<"dying ...";
}

void House::printInfo() const
{
    qDebug() <<"House :" << _houseDescription;
}
