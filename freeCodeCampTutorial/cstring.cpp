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


	/*********   Finding all the instances of a given character ***********/
	char str[]="This is a silly, snaking string with a lot of s's";

	std::cout<<"Looking for the 's' character in: \n"<<str<<std::endl;
	char* result=str;
	int instances=0;
	while((result=strchr(result,'s'))!=nullptr){
		result++;
		instances++;
		
	}
	
	std::cout<<"We found "<<instances<<" instances of the character"<<std::endl;

	/*** Finding the last instance of a character in a string ****/\
	char path[]="/CPP/freeCodeCampTutorial/cstring.cpp";
	char* output=strrchr(path,'/');

	std::cout<<"The file path is:\n"<<path<<std::endl;
	if(output){
		std::cout<<"The file name is "<<output+1<<std::endl;
	}


} // end main
