#include <iostream>
#include "Box.h"
using namespace std;


int main()
{
    Box b(10,20,31);
    std::cout<< b.getVolume()<<std::endl;
    return 0;
}
