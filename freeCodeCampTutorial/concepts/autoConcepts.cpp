// This file will illustrate the use of concepts to enforce template constraints
#include <iostream>
#include <string>

template <typename T>

concept myIntegral=requires(T a, T b){
        sizeof(T)<=4; // This simple requirement just evaluates this statement, which is valid syntax so throws no error
        // This actually checks that the size is no greater than 4
        requires sizeof(T)<=4;
        {a+b }->std::convertible_to<double>; // This adds the two variables and then checks if the result can be converted to an int 
    };

// Note that we can put myIntegral in front of auto to specify the return type of the function
myIntegral auto Add(myIntegral auto a, myIntegral auto b){
    std::string y="hi";
    return y;    
}

myIntegral auto add(myIntegral auto a, myIntegral auto b){
    return a+b;   
}


int main()
{
    int x=5;
    int y=10;
    // Add(x,y)
    /**** This is sort of silly. Why put this here when we are already checking the return of the template?
	std::floating_point auto z=add(x,y);
	***/
	std::floating_point auto f=6.5;
	//std::floating_point auto f1=6;
}
