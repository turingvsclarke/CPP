#include<iostream>
#include<string>

int main(){
	// CALLING A FUNCTION W RETURN
	auto max1=[](int a, int b)->double{
		if(a>b){	
			return a;
		}else{
			return b;
		}
	};
	/// RETURN TYPE IMPLICIT
	auto max=[](int a, int b){
		if(a>b){	
			return a;
		}else{
			return b;
		}
	};
	// CALLING THE LAMBDA FUNCTION DIRECTLY(only runs once)		
	[](int a, int b){
		if(a>b){	
			std::cout<<"the max is "<<a<<std::endl;
		}else{
			std::cout<<"the max is "<<b<<std::endl;
		}
	}(5,4);		
	int y=5;
	int z=4;
	int x=max1(y,z);
	std::cout<<"The max of "<<y<<" and "<<z<<" is "<<x<<std::endl;	
	std::cout<<"The max of "<<y<<" and "<<z<<" is "<<max(y,z)<<std::endl;
	// Using lambda functions in a direct output statement	
	std::cout<<"The max of 6 and 10 is "<<[](int a, int b)->double{
		if(a>b){	
			return a;
		}else{
			return b;
		}
	}(6,10)<<std::endl;

} // end main
