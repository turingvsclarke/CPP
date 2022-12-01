#include<iostream>
#include<string>

/****** OVERLOADING FUNCTIONS ********/
 
/*********** FUNCTION TEMPLATES ALLOW US TO DO ALL THIS OVERLOADING IN ONE LINE
int max(int b, int a){
	std::cout<<"Int overload called"<<std::endl;	
	return (a>b)?a:b;
} // end max
double max(int a,  b){
	return (b>a)?b:a;
}
This IS enough
int max(double a,double b){
	return (a>b)?a:b;
	std::cout<<"Double overload called"<<std::endl;
} // end max

double max(double a,int b){
	std::cout<<"Double int overload called"<<std::endl;
	return (a>b)?a:b;
	std::cout<<"Double overload called"<<std::endl;
} // end max

double max(int a,double b){
	std::cout<<"Int double overload called"<<std::endl;
	return (a>b)?a:b;
} // end max

double max(double a,double b){
	std::cout<<"Double overload called"<<std::endl;
	return (a>b)?a:b;
} // end max

double max(double a,double b,int c){
	std::cout<<"Double double int overload called"<<std::endl;
	return (a>b)?a:b;
} // end max


std::string max(std::string a,std::string b){	
	std::cout<<"String overload called"<<std::endl;
	return (a>b)?a:b;
} // end max
**************************/

// All the above gets replaced by

template <typename T> T maximum(T a, T b){
	return (a>b)?a:b;
} // the typename must support > operator


template <typename T> T multiply(T a, T b){
	return a*b;
} // the typename must support > operator

int main(){
	int x=5;
	int y=6;
	auto result=maximum(x,y);
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
	// auto r3=max(x,a); Templates require parameters to be of the same type
	// auto r4=max(a,x);
	// max(a,z,x);
	std::cout<<"Multiplying the integers: "<<multiply(x,y)<<std::endl;
	std::cout<<"Multiplying the doubles: "<<multiply(a,z)<<std::endl;
        //std::cout<<"Multiplying the strings: "<<multiply(s1,s2)<<std::endl;
} // end main
