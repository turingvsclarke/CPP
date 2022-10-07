#include <iostream>

int main(){
	// int x=-5;
	// this is the biggest value we can use for x without it turning neg
	// Without an unsigned or long modifier, x is changed to negative
	unsigned int x = 2147483648;
	unsigned int y = -2147483648;
	std::cout<<"The number x has value "<<x<<std::endl;

} // end main
