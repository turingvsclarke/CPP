#include <iostream>
#include <iomanip>

int main(){
	double x;
	double y;
	long double a;
	long double b=10L;
	float p;
	float n;

	std::cout<<"The size of an int is "<<sizeof(int)<<std::endl;
	std::cout<<"The size of a double is "<<sizeof(y)<<std::endl;
	std::cout<<"The size of a long double is "<<sizeof(long double)<<std::endl;
	std::cout<<"The size of a float is "<<sizeof(n)<<std::endl;

	// Storing a 28 sig fig numbers three different ways
	float x1=2.123456789123456789123456789;
	double x2=2.123456789123456789123456789;
	long double x3=2.123456789123456789123456789L;
	std::cout<<std::setprecision(30);
	std::cout<<"Float version "<<x1<<std::endl;
	std::cout<<"Double version "<<x2<<std::endl;
	std::cout<<"Long version "<<x3<<std::endl;

} // end int
