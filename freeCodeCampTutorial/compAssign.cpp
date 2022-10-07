#include <iostream>
int main(){
	int x=5;
	std::cout<<"Initial value: "<<x<<std::endl;
	x+=7;
	std::cout<<"Addition assignment: "<<x<<std::endl;
	x-=3;
	std::cout<<"Subtraction assignment: "<<x<<std::endl;
	x*=6;	
	std::cout<<"Multiply assignment: "<<x<<std::endl;
	x/=8;
	std::cout<<"Division assignment: "<<x<<std::endl;
	x%=4;
	std::cout<<"Modulo assignment: "<<x<<std::endl;
	
} // end main
