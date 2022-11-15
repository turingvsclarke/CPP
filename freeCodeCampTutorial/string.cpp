// Example program
#include <iostream>
#include <cstring>
#include <string>
int main()
{
  std::string string="hi";
  std::string hello("How are you",4);
  std::string s2(hello,1,2);
  std::string hi(5,'w');
  std::cout<<s2<<std::endl;
  std::cout<<hi<<std::endl;
  std::cout<<hello<<std::endl;
  // Can store values way bigger than original memory allocation in our string variables.
  s2="aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
  std::cout<<s2<<std::endl;
  // This is supposed to send planet to a different address, but it doesn't
  const char* planet="Earth";
  std::cout<<&planet<<std::endl;
  planet="Earth the final frontier";
  std::cout<<&planet<<std::endl;
}
