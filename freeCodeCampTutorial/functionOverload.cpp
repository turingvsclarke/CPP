#include<iostream>
#include<string>

/****** OVERLOADING FUNCTIONS ********/
 

int max(int b, int a){
	std::cout<<"Int overload called"<<std::endl;	
	return (a>b)?a:b;
} // end max
/*** This is not enough change
double max(int a,  b){
	return (b>a)?b:a;
}
This IS enough
int max(double a,double b){
	return (a>b)?a:b;
	std::cout<<"Double overload called"<<std::endl;
} // end max
****/
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

int main(){
	int x=5;
	int y=6;
	auto result=max(x,y);
	std::string s1="Hello";
	std::string s2="HI";
	auto result2=max(s1,s2);
	double a=6;
	double z=5;
	auto r3=max(x,a);
	auto r4=max(a,x);
	max(a,z,x);
} // end main
