#include "Rectangle.h"

// decoration start
Reactangle::Reactangle(){
    std::cout << "deufault constructor gets called"<< std::endl;
}


Reactangle::Reactangle(int length,int width){
    std::cout << "Paremeter constructor gets called Reactangle" << std::endl;
    this->_width = width;
    this->_length  = length;
}

void Reactangle::SetWidth(int width){
    this->_width = width;
}

void Reactangle::SetLength(int length){
    this->_length = length;
}


int Reactangle::getArea() const{
    return this->_width * this->_length;
}
