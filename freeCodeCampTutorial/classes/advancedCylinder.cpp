// This file will illustrate the use of concepts to enforce template constraints
#include <iostream>
#include <string>
#include <numbers>

class Cylinder {
    // public: 
    private:
        double radius=1;
        double height=1; 
        
    public:
        // This forces the compiler to make a default, null-param constructor
        Cylinder()=default;
        /***
        Cylinder(){
            radius=2;
            height=2;
        }
        ***/
        Cylinder(double rad, double h){
            radius=rad;
            height=h;
        }
        double volume(){
            return radius*radius*std::numbers::pi*height;    
        }
 
        double getRadius(){
            return radius;    
        }
        double getHeight(){
            return height;    
        }
        void setRadius(double rad){
            radius=rad;
        }
        void setHeight(double h){
            height=h;    
        }
        
}; // end class


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
