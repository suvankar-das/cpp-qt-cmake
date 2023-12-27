#include "Box.h"

int Box:: getVolume() const{
    return this->_rect.getArea() * this->_height;
}
