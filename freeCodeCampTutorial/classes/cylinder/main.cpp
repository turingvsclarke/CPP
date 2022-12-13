// main.cpp
#include <iostream>
#include <string>
#include "constants.h"
#include "cylinder.h"

int main()
{
    // With a parameter constructor, the compiler no longer generates a default empty one
    Cylinder cylinder1;
    std::cout<<"Volume: "<<cylinder1.volume()<<std::endl;
    /***
    cylinder1.radius=10;
    cylinder1.height=3;
    ***/
    Cylinder cylinder2(5,6);
    std::cout<<"Volume: "<<cylinder2.volume()<<std::endl;
    cylinder2.setRadius(10);
    cylinder2.setHeight(3);
    std::cout<<"Volume: "<<cylinder2.volume()<<std::endl;
}
