#include <iostream>

int sum(int a, int b){
	int sum = a+b;
	return sum;
}

int main(){
	int x=sum(5,9);
	std::cout<<"The sum of "<<5<<" and "<<9<<" is "<<x<<std::endl;
}
