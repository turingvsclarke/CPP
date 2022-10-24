#include<algorithm>
#include<iomanip>
#include<iostream>
int main(){
	int *data2=new int[10000000000000];   // This is the largest size we can store w/o an error
	std::cout<<"Properly deleting data2"<<std::endl;
	delete data2; // Without this the rest of the program crashes
	// The array declared above by new is leaked because it isn't assigned to anything else
	std::cout<<"Assigned data2, now leaking it's memory and assigning it to another array"<<std::endl;
	data2=new int(5);
	delete[] data2;	
	std::cout<<"New data2 is deleted, but the first one has still been leaked. Attempting to assign it another array"<<std::endl;
	/***
	for(int i=0;i<10;i++){
		data2=new int[10000000000000];
		std::cout<<i<<std::endl;
	}
	***/
	data2=new int[20000000000000];   // This is the largest size we can store w/o an error
	std::cout<<"Program successfully completed"<<std::endl;
}
