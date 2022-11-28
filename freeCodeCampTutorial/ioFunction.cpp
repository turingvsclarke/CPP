#include<iostream>
#include<string>
/*** Looking at functions that modify a given variable that's passed as a parameter
# Pass as a reference or pointer in order to modify it
# This also saves memory space
# Input parameters shouldn't be modified so use const
***/
void maxInt(const int& input1,const int& input2, int& output){
	if(input1>input2){
		output=input1;
	}else{
		output=input2;
	} // end else
} // end maxInt

void maxString(const std::string* s1, const std::string* s2, std::string* output){
	if(*s1>*s2){
		*output=*s1;
	}else{
		*output=*s2;
	} // end else
} // end maxString

void maxDouble(double input1,double input2, double* output){
	if(input1>input2){
		*output=input1;
	}else{
		*output=input2;
	} // end else
} // end maxDouble

// using return by value 
int sum(int x,int y){
	int output=x+y;
	std::cout<<"The address of the output within the function is "<<&output<<std::endl;
	return output;
} // end sum

int main(){
	int x=5;
	int y=4;
	int z;
	maxInt(x,y,z);
	std::cout<<"The max of "<<x<<" and "<<y<<" is "<<z<<std::endl;
	std::string s1="HI";
	std::string s2="BYE";
	std::string s3;
	maxString(&s1,&s2,&s3);	
	std::cout<<"The max of "<<s1<<" and "<<s2<<" is "<<s3<<std::endl;
	double a=45.8;
	double b=56.4;
	double c;
	maxDouble(a,b,&c);	
	std::cout<<"The max of "<<a<<" and "<<b<<" is "<<c<<std::endl;
	int s=5;
	int t=6;
	int v=sum(s,t);
	std::cout<<"The address of the output outside the function is "<<&v<<std::endl;
	std::cout<<"The sum of "<<s<<" and "<<t<<" is "<<v<<std::endl;

} // end main

