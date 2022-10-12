// Example program
#include <iostream>
#include <string>
#include <cmath>

int main()
{
  double weight = 7.7;
  double savings=-5000;
  
  // floor 
  std::cout<<"Weight rounded to floor is : "<<std::floor(weight)<<std::endl;
  
  // ceil 
  std::cout<<"Weight rounded to ceil is : "<<std::ceil(weight)<<std::endl;
  
  //abs
  std::cout<<"Abs of savings is :"<<std::abs(weight)<<std::endl;
  
  std::cout<<"e raised to the savings is "<<std::exp(savings)<<std::endl;
  std::cout<<"e raised to the wight is "<<std::exp(weight)<<std::endl;
  std::cout<<"To get 100 you need to raise e to the "<<std::log(100)<<std::endl;
  std::cout<<"Rounding 7.5 yields "<<std::round(7.5)<<std::endl;
  std::cout<<"Rounding 7.4 yields "<<std::round(7.4)<<std::endl;
  std::cout<<"The root of 81 is "<<std::sqrt(81)<<std::endl;
}
