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

// If you're using auto(this sets up a template)

auto add(myIntegral auto a, myIntegral auto b){
    return a+b;    
}


// Combining concepts

template <typename T>
//requires myIntegral<T> && std::integral<T>
requires myIntegral<T> || std::floating_point<T> 
T Add(T a, T b){
    return a + b;
}

int main()
{
    /***
    long long int x=5;
	long long int y=6;	
	***/
	long int x=5;
	long int y=6;
    //add(x,y);
    std::cout<<"Size of long int: "<<sizeof(x)<<std::endl;
    
    char g=60;
    char h=50;
    std::cout<<"Size of char: "<<sizeof(g)<<std::endl;
    std::cout<<"Size of result of adding two chars: "<<sizeof(add(g,h))<<std::endl;
    
    
    double a = 5;
    double b = 6;
    std::cout<<"Size of a: "<<sizeof(a)<<std::endl;
    //add(a,b); // This 
	
	// Testing the addability of different types
	std::string s1="Hello";
	std::string s2=" World";
	// Fails because you can't convert strings to doubles: add(s1,s2);
	float f1=52;
	float f2=49;
	add(f1,f2);
	
	char* c1="hello";
	char* c2=" world";
	// add(c1,c2);
	
	Add(x,y);
	Add(g,h);
	//Add(a,b);
	//Add(s1,s2);
	//Add(f1,f2);
	//Add(c1,c2);	
	
}
