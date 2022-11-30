#include<iostream>
#include<string>


int a=5;
int b=6;
int sum(){
	return a+b;
}


int main(){
	int a=5;
	std::cout<<"The address of a before the function is "<<&a<<std::endl;
	int b=6;
	/** This doesn't work
	int sum(){
		return a+b;
	}
	***/
	// This does
	std::cout<<"the sum function returns "<<sum()<<std::endl;
	
	// This does, but this is a copy, not the original
	auto func=[a,b](){
		std::cout<<"The address of a within the function is "<<&a<<std::endl;
		return a+b;
	};
	// THE VARIABLES HAVE ALREADY BEEN CAPTURED, SO CHANGES WONT AFFECT THINGS
	std::cout<<"the sum before a function call is "<<a+b<<std::endl;
	a*=26;
	b*=24;
	std::cout<<"The sum before the function call but after changing the variables is "<<a+b<<std::endl;
	int z=func();
	std::cout<<"The sum via the function after changing the variables is "<<z<<std::endl;
	
	// This does, capturing by reference
	auto func1=[&a,&b](){
		std::cout<<"The address of a within the function is "<<&a<<std::endl;
		return a+b;
	};
	// THE VARIABLES HAVE ALREADY BEEN CAPTURED, SO CHANGES WONT AFFECT THINGS
	std::cout<<"the sum before a function call is "<<a+b<<std::endl;
	a*=26;
	b*=24;
	std::cout<<"The sum before the function call but after changing the variables is "<<a+b<<std::endl;
	int w=func1();
	std::cout<<"The sum via the function by reference after changing the variables is "<<w<<std::endl;
	int c=10;
	// This syntax allows us to calculate everything by value
	auto f1=[=](){
		std::cout<<"I have access to all the variables by value"<<std::endl;
		std::cout<<"a: "<<a<<std::endl;
		std::cout<<"b: "<<b<<std::endl;
		std::cout<<"c: "<<c<<std::endl;
	};
	// by reference
	auto f2=[&](){	
		std::cout<<"I have access to all the variables by reference"<<std::endl;
		std::cout<<"a: "<<a<<std::endl;
		std::cout<<"b: "<<b<<std::endl;
		std::cout<<"c: "<<c<<std::endl;
	}; 

	for(int i=0;i<5;i++){
		std::cout<<"c: "<<c<<std::endl;
		f1();
		f2();
		c++;
	}


} // end main
