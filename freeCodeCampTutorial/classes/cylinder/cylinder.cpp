// cylinder.cpp
#include "constants.h"
#include "cylinder.h"
#include<iostream>
// This forces the compiler to make a default, null-param constructor

Cylinder::Cylinder(double rad, double h){
    radius=rad;
    height=h;
}
double Cylinder::volume(){
    return radius*radius*PI*height;    
}
 
double Cylinder::getRadius(){
    return radius;    
}
double Cylinder::getHeight(){
    return height;    
}
void Cylinder::setRadius(double rad){
    radius=rad;
}
void Cylinder::setHeight(double h){
    height=h;    
}

