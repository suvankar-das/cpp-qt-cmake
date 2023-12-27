 - To split up the code , first go to , right click on the project name > add new header file > meaningful_name.h
 -  After that , from build menu , click on Run Cmake , this will create You a header file with ,

    #ifndef RECTANGLE_H
    #define RECTANGLE_H
    #endif // RECTANGLE_H


 - Then , cut the decoration inside like this ,
 - 


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

Then to clear more , right click on the project name > add new source file > meaningful_name.cpp , and paste implementation there..

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



