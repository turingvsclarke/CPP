// cylinder.h
#ifndef CYLINDER_H
#define CYLINDER_H
#include "constants.h"
#include<algorithm>
#include<iostream>
const std::string secret="hello";
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
        Cylinder(double rad, double h);
        double volume();
 
        double getRadius(); 
        double getHeight();
        void setRadius(double rad);
        void setHeight(double h); 
        
}; // end class
#endif 
