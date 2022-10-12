#include<iostream>
#include<iomanip>

int main(){
	std::cout<< "The range for short is from "<<std::numeric_limits<short>::min()<<" to "<<std::numeric_limits<short>::max()<<std::endl;
	std::cout<< "The range for unsigned short is from "<<std::numeric_limits<unsigned short>::min()<<" to "<<std::numeric_limits<unsigned short>::max()<<std::endl;
	std::cout<< "The range for int is from "<<std::numeric_limits<int>::min()<<" to "<<std::numeric_limits<int>::max()<<std::endl;
	std::cout<< "The range for unsigned int is from "<<std::numeric_limits<unsigned int>::min()<<" to "<<std::numeric_limits<unsigned int>::max()<<std::endl;
	std::cout<< "The range for long is from "<<std::numeric_limits<long>::min()<<" to "<<std::numeric_limits<long>::max()<<std::endl;
	std::cout<< "The range for float is from "<<std::numeric_limits<float>::min()<<" to "<<std::numeric_limits<float>::max()<<std::endl;

	// This shows the difference between minimum and lowest
	std::cout<< "The range for short is from "<<std::numeric_limits<short>::lowest()<<" to "<<std::numeric_limits<short>::max()<<std::endl;
	std::cout<< "The range for unsigned short is from "<<std::numeric_limits<unsigned short>::lowest()<<" to "<<std::numeric_limits<unsigned short>::max()<<std::endl;
	std::cout<< "The range for int is from "<<std::numeric_limits<int>::lowest()<<" to "<<std::numeric_limits<int>::max()<<std::endl;
        std::cout<< "The range for unsigned int is from "<<std::numeric_limits<unsigned int>::lowest()<<" to "<<std::numeric_limits<unsigned int>::max()<<std::endl;
        std::cout<< "The range for long is from "<<std::numeric_limits<long>::lowest()<<" to "<<std::numeric_limits<long>::max()<<std::endl;		
        std::cout<< "The range for float is from "<<std::numeric_limits<float>::lowest()<<" to "<<std::numeric_limits<float>::max()<<std::endl;		
}
