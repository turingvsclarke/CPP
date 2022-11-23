#include<iostream>
#include<string>

int dateToMonth(std::string month){
	int result;
	if(month=="Jan"){
		month="CRAZY conversion to somehting totally different";
		result=1;
	}
	else if(month=="Feb"){
		month="CRAZY conversion to somehting totally different";
		result=2;

	}
	else {
		result=0;
	}	
	std::cout<<"Month within the function with it: "<<month<<". Address of month within function: "<<&month<<std::endl;
	return result;
}

std::string greeting(std::string name){
	std::string greeting="Hi "+name;
	return greeting;
}

int main() {
	std::string name="Bob";
	std::cout<<greeting(name)<<std::endl;
	name=greeting(name);
	std::string month="Feb";	
	std::cout<<"Month before running function with it: "<<month<<". Address of month before running function on it: "<<&month<<std::endl;
	int month2=dateToMonth(month);
	std::cout<<"The month is "<<month2<<std::endl;
	std::cout<<"Month after running function with it: "<<month<<". Address of month after running function on it: "<<&month<<std::endl;
} // end main

