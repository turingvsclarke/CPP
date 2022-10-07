#include <iostream>
#include <string>

int main(){
	/***
	std::cout<<"Printing out some code\n";
	std::cout<<"Enter your age:";
	auto age=0;
	std::string name;
	std::cin>>age;
	std::cout<<"Enter your name:";
	std::cin>>name;
	std::cout<<"Your age: "<<age<<std::endl;
	std::cout<<"Your name: "<<name<<std::endl;
	***/
	// Same thing but grabbing the name and age separately
	std::string full_name;
	auto age='i';
	std::cout<<"Enter your full name and age:"<<std::endl;
	std::getline(std::cin, full_name);
	std::cin>>age;
	std::cout<<full_name<<" is "<<age<<" years old."<<std::endl;
	/**** AUTO WILL TREAT a AS CHAR, THEN RETURN ITS ASCII KEY VALUE ADDED TO B*******/
	auto a = '5';
	auto b = 2.34;

	std::cout<<a<<" + "<<b<<" is "<<a+b<<std::endl;


}	
