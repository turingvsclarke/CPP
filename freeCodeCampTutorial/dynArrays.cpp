#include<iostream>
#include<string>

int main(){
	// This is a pointer that points to the first of a sequence of memory locations, together called a dynamic array
	int *p=new int[33];
	std::cout<<*p<<std::endl;
	int arr[]={1,2,3,55,44};
	int n=0;
	// arr is static so this works, but it won't work for dynamic arrays
	for(int i:arr){
		std::cout<<i<<std::endl;
		p[n]=i;
		n++;
	}	

    	// int *p1 {new int[33]{1,2,3,55,44}}; // This works in c++ 11 but not here. 
	for(int i=0;i<20;i++){
		std::cout<<"The value of p at index "<<i<<" is: "<<p[i]<<"="<<*(p+i)<<std::endl;
	}
}
