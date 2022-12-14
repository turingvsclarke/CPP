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

 
    /** Creating a variable using pointers ***/
    Cylinder* c3 = new Cylinder(11,20);
    Cylinder* c4 = &cylinder1;   
   

    /**** Showing that the pointer points to the original object, so changing it's target's values changes is the exact same as doing so via the pointer ***/ 
    std::cout<<"volume c4: "<<(*c4).volume()<<std::endl;
    std::cout<<"volume c4: "<<c4->volume()<<std::endl;
    cylinder1.setRadius(6);
    cylinder1.setHeight(10);   

    std::cout<<"New c1 volume: "<<cylinder1.volume()<<std::endl;
    std::cout<<"New c4 volume: "<<c4->volume()<<std::endl;


    c4->setRadius(65);
    c4->setRadius(63);

    std::cout<<"New c1 volume: "<<cylinder1.volume()<<std::endl;
    std::cout<<"New c4 volume: "<<c4->volume()<<std::endl;

    // Either dereference or use the arrow to access things easily
    std::cout<<"volume c3: "<<(*c3).volume()<<std::endl;
    std::cout<<"volume c3: "<<c3->volume()<<std::endl;

    delete c3;
}
