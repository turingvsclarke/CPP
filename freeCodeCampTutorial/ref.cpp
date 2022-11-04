// Example program
#include <iostream>
#include <string>

int main()
{
  // References must be initialized upon declaration
  // int& nada;    
    
    
  int n=5;
  int& n5=n;
  n5=3;
  int y=6;
  n5=y;
  int x=2;
  int& z=n5;
  std::cout<<"the value of n is "<<n<<", stored at address "<<&n<<std::endl;
  std::cout<<"the value of n5 is "<<n5<<", stored at address "<<&n5<<std::endl;
  std::cout<<"the value of z is "<<z<<", stored at address "<<&z<<std::endl;
  std::cout<<"the value of y is "<<y<<", stored at address "<<&y<<std::endl;
  z=2;
std::cout<<"the value of n is "<<n<<", stored at address "<<&n<<std::endl;
  std::cout<<"the value of n5 is "<<n5<<", stored at address "<<&n5<<std::endl;
  std::cout<<"the value of z is "<<z<<", stored at address "<<&z<<std::endl;
  
  
  int* p=&n;
  int* p1=p;
  std::cout<<"the value of p is "<<*p<<", stored at address "<<p<<std::endl;
  std::cout<<"the value of p1 is "<<*p1<<", stored at address "<<p1<<std::endl;
  int p2=3;
  std::cout<<"\n\n\nThe result of changing p1:"<<std::endl;
  p1=&p2;
  std::cout<<"the value of p is "<<*p<<", stored at address "<<p<<std::endl;
  std::cout<<"the value of p1 is "<<*p1<<", stored at address "<<p1<<std::endl;
  
  std::cout<<"\n\n\nThe result of changing p:"<<std::endl;
  int p3=5;
  p=&p3;
  std::cout<<"the value of p is "<<*p<<", stored at address "<<p<<std::endl;
  std::cout<<"the value of p1 is "<<*p1<<", stored at address "<<p1<<std::endl;
  std::cout<<"the value of n is "<<n<<", stored at address "<<&n<<std::endl;

  
}
