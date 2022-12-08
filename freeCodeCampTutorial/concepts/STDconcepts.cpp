// This file will illustrate the use of concepts to enforce template constraints
#include <iostream>
#include <string>

 template <typename T>
 // integral type is required
requires std::integral<T>
 T multiply(T a, T b)
 // we can also put requires std::integral here
 {
	return a*b;
} // end multiply template

// A second way to make a concept
template <std::integral T>
T max(T a, T b){
    if(a>b){
        return a;
    }else{
        return b;
    } // end else
} // end max

// A third way 
template <typename T>
// If you're using auto
auto add(std::integral auto a, std::integral auto b){
    return a+b;    
}

int main()
{
    int x=5;
	int y=6;	

	auto r=multiply(x,y);
    char g='w';
	char h='a';
	std::cout<<"a times w: "<<multiply(g,h)<<std::endl;
	
	bool t=true;
	bool f=false;
	std::cout<<"Result of max of true and false: "<<max(t,f)<<std::endl;

	std::cout<<"max("<<g<<","<<h<<"): "<<max(g,h)<<std::endl;
	double a=6.8; 
	double z=5.5;
    std::cout<<"Trying to multiply integers "<<x<<" and "<<y<<" :"<<multiply(x,y)<<std::endl;


}
