#include<iostream>
#include<string>

template <typename T> T maxemum(T a, T b);

template <typename T> T multiply(T a, T b);

template <typename T>const T& maximum(const T& a,const T& b);

int main(){
	int x=5;
	int y=6;	
	std::cout<<"Address of x :"<<&x<<std::endl;
	auto result=maxemum(x,y);

	// The maximum template is now pass by reference
	auto r=maximum(x,y);
	/*** WARNING!! THIS WILL COMPARE THE ADDRESSES SO BE CAREFUL WITH TEMPLATES. IT MIGHT
	COMPILE BUT STILL RETURN SOMETHING YOU DON'T WANT ********/	
	auto res3=maximum(&x,&y);
	std::cout<<"Result is: "<<*res3<<std::endl;

	std::string s1="Hello";
	std::string s2="HI";
	std::string result2=maximum(s1,s2);
	double a=6.8;
	double z=5.5;
	std::cout<<"Max of double "<<a<<" and "<<z<<": "<<maximum(a,z)<<std::endl;
	auto r3=maximum<double>(x,a);  // Explicitly calling out what type we want gives more options like using implicit type conversion
	// auto r4=max(a,x);
	// max(a,z,x);
	
	std::cout<<"Max of int and double: "<<r3<<std::endl;
	std::cout<<"Multiplying one int and one double: "<<multiply<double>(a,x)<<std::endl;
	std::cout<<"Multiplying one int and one double: "<<multiply<int>(a,x)<<std::endl;
	
	std::cout<<"Multiplying the integers: "<<multiply(x,y)<<std::endl;
	std::cout<<"Multiplying the doubles: "<<multiply(a,z)<<std::endl;
        //std::cout<<"Multiplying the strings: "<<multiply(s1,s2)<<std::endl;
} // end main


template <typename T>const T& maximum(const T& a,const T& b){
	std::cout<<"&a w/in function: "<<&a<<std::endl;
	// Can't modify variables in here cause constants
	// a++;
	return (a>b)?a:b;
} // the typename must support > operator


template <typename T> T maxemum(T a, T b){
	std::cout<<"&a w/in function: "<<&a<<std::endl;
	return (a>b)?a:b;
} // the typename must support > operator

template <typename T> T multiply(T a, T b){
	return a*b;
} // the typename must support > operator
