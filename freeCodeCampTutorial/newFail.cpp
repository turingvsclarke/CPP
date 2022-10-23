#include<algorithm>
#include<iomanip>
#include<iostream>
int main(){
	int *data=new(std::nothrow) int[100000000000000];
	int *data2=new int[10000000000000];
	/***
	for(int i=0;i<10000000;i++){
		try{
			int *d=new int[100000000];	
		} // end try
		catch(std::exception){
			std::cout<<"Error"<<std::endl;
		}

	}
	***/
	int *ptr1=new int(5);
	std::cout<<"ptr1: "<<*ptr1<<std::endl;

	/*** this gets a seg fault b/c the size of our array
	int *ptr2;
	std::cout<<*ptr2<<std::endl;
	***/
}
