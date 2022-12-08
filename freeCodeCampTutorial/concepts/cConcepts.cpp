// This file will illustrate the use of concepts to enforce template constraints
#include <iostream>
#include <string>

template <typename T>
concept myIntegral=std::is_integral_v<T>;

template <typename T>
concept multiplying = requires(T a,T b){
    // Can put multiple requirement statements here
    a*b; 
    a++;
    a+b;
};


 template <typename T>
 // integral type is required
requires multiplying<T>
 T multiply(T a, T b)
 // we can also put requires std::integral<T> here
 {
	return a*b;
} // end multiply template

// A second way to make a concept
template <myIntegral T>
T max(T a, T b){
    if(a>b){
        return a;
    }else{
        return b;
    } // end else
} // end max

// A third way to make a concept
// If you're using auto(this sets up a template)
auto add(myIntegral auto a, myIntegral auto b){
    return a+b;    
}

int main()
{
    int x=5;
	int y=6;	

	// The maximum template is now pass by reference
	auto r=max(x,y);

	std::string s1="Hello";
	std::string s2="HI";
	std::string result2=max(s1,s2);
	// multiply(s1,s2);
	double a=6.8;
	double z=5.5;
	std::cout<<"Multiplying double "<<a<<" and "<<z<<": "<<multiply(a,z)<<std::endl;
	auto r3=multiply<double>(x,a);  // Doesn't work cause doubles	
	std::cout<<"Multiplying int and double: "<<r3<<std::endl;
	
	char g='w';
	char h='a';

	std::cout<<"max("<<g<<","<<h<<"): "<<max(g,h)<<std::endl;

	std::cout<<"Multiplying the integers: "<<multiply(x,y)<<std::endl;
	// multiply(s1,s2); Doesn't work because strings

    add(g,h);
  //  add(a,z); doesn't work because doubles
}
