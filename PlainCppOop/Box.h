#ifndef BOX_H
#define BOX_H
#include "Rectangle.h"
#include<iostream>

// Box class new intrudocue which will use reactangle's properties.

class Box{
public:
    Box(int width, int length, int height) : _rect(width,length),_height(height){
        std::cout << "Parameter constructor Box gets called " << std::endl;
    }

    int getVolume() const;

private:
    Reactangle _rect;
    int _height;
};


// decoration end

#endif // BOX_H
