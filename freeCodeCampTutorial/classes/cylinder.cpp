// This file will illustrate the use of concepts to enforce template constraints
#include <iostream>
#include <string>
#include <numbers>

class Cylinder {
    private: 
        double radius;
        double height; 
        
    public:
        double volume(){
            return radius*radius*std::numbers::pi*height;    
        }
}; // end class


int main()
{
    Cylinder cylinder1;
    std::cout<<"Volume: "<<cylinder1.volume()<<std::endl;
}
