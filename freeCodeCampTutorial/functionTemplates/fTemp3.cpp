#include<iostream>
#include<string>

template <typename T> T maximum(T a, T b);

// Specializing our template so it doesn't do the default for a certain type
template <> std::string maximum<std::string> (std::string a, std::string b){
	std::cout<<"You found the special version of this template!"<<std::endl;
	return a;
}

template <> const char* maximum<const char*> (const char* a,const char* b){
	return (strcmp(a,b)>0)?a:b;
}

template <typename T> T multiply(T a, T b){
	return a*b;
} // end multiply template

template <> std::string multiply(std::string a,std::string b){
	std::cout<<"you can't multiply strings, silly"<<std::endl;
	return "";
}

int main(){
	int x=5;
	int y=6;	

	// The maximum template is now pass by reference
	auto r=maximum(x,y);

	std::string s1="Hello";
	std::string s2="HI";
	std::string result2=maximum(s1,s2);
	double a=6.8;
	double z=5.5;
	std::cout<<"Max of double "<<a<<" and "<<z<<": "<<maximum(a,z)<<std::endl;
	auto r3=maximum<double>(x,a);  // Explicitly calling out what type we want gives more options like using implicit type conversion	
	std::cout<<"Max of int and double: "<<r3<<std::endl;
	
	const char* g="wild";
	const char* h="animal";

	std::cout<<"max("<<g<<","<<h<<"): "<<maximum(g,h)<<std::endl;

	std::cout<<"Multiplying the integers: "<<multiply(x,y)<<std::endl;
	multiply(s1,s2);


} // end main





template <typename T> T maximum(T a,T b){
	return (a>b)?a:b;
} // the typename must support > operator



