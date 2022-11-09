#include<iostream>
#include<cstring>

int main(){
	char string[]="Hello World";
	// The pointer automatically blocks out the rest of the characters in subsequent memory blocks
	char* string2="Welcome Back";

	std::cout<<"The length of the string is "<<strlen(string)<<std::endl;
	std::cout<<"The length of the string is "<<strlen(string2)<<std::endl;
	// strcmp compares characters until it reaches a difference. In this case, W comes 15 characters after H, so it returns -15	
	std::cout<<"strcmp ("<<string<<","<<string2<<") : "<<strcmp(string,string2)<<std::endl;
	
	std::cout<<"strcmp ("<<string2<<","<<string<<") : "<<strcmp(string2,string)<<std::endl;

	int n=10;
	/// strncmp stops trying to compare after n chars
	std::cout<<"strncmp ("<<string<<","<<string2<<","<<n<<") : "<<strncmp(string,string2,n)<<std::endl;
} // end main
