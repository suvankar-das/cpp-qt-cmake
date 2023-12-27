#include <iostream>

using namespace std;

// class declartaion start
class Reactangle
{
public:
    Reactangle();
    Reactangle(int l,int w);
    void SetWidth(int w);
    void SetLength(int l);
    /*The const keyword at the end of the function definition means that this function does not modify the object's member variables.
 *  It indicates that when this function is called on a const object of the Rectangle class,
 *   it won't alter any of the object's data members.
*/
    int getArea() const;


private:
    int _width,_length;
};

// class declartaion end



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


int Box:: getVolume() const{
    return this->_rect.getArea() * this->_height;
}

// decoration end

int main()
{
    Box b(10,20,30);
    std::cout<< b.getVolume()<<std::endl;
    return 0;
}
