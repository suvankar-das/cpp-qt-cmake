#ifndef RECTANGLE_H
#define RECTANGLE_H
#include<iostream>

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

#endif // RECTANGLE_H
