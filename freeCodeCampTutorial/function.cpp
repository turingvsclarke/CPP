#include<iostream>
#include<string>

void duckSounds(){
	std::cout<<"Quack, quack"<<std::endl;
} // end duckSounds

int dateToMonth(std::string month){
	if(month=="Jan"){
		month="CRAZY conversion to somehting totally different";
		return 1;
	}
	else if(month=="Feb"){
		month="CRAZY conversion to somehting totally different";
		return 2;

	}
	else {
		return 0;
	}
	
}

double max(int a, int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
	
}

std::string greeting(std::string name){
	std::string greeting="Hi "+name;
	return greeting;
}

int main() {
	duckSounds();
	std::string name="Bob";
	std::cout<<greeting(name)<<std::endl;
	name=greeting(name);
	std::string month="Feb";
	std::cout<<"The month is "<<dateToMonth(month)<<std::endl;
	std::cout<<"Month after running function with it: "<<month<<std::endl;
	// Floats can be passed to max, even though it takes ints, and it returns an int object value even though it is supposed to return doubles
	float x=5.5;
	float y=6.778;
	double c=max(5.5,6.7778);
	std::cout<<"the max of "<<x<<" and "<<y<<" is "<<c<<std::endl;
} // end main
