// Example program
#include <iostream>
#include <cstring>

int main()
{
  // I tried this with char*=. Things got super weird. There was no null-terminating character, I guess, so all other string literals got pieces of these 
  char src[50]="Hello ";
  char dest[30]="World!";
  std::cout<<strcat(src,dest)<<std::endl;
  std::cout<<strcat(src,"hi")<<std::endl;
  std::cout<<strcat(" How are you?",dest)<<std::endl;
  strcat(src,dest);
  std::cout<<dest<<std::endl; 
  std::cout<<src<<std::endl;
  
  char s[30]="Size";
  char d[10]=" small";
  
  std::cout<<strcat(s,d)<<std::endl;
  
  std::cout<<strncat("Hi ","dude",12)<<std::endl;

  const char* original="This course is boring";
  char copy[strlen(original)+1];
  
  strcpy(copy,original);
  std::cout<<copy<<std::endl;
  strncpy(copy,original, 3);
  std::cout<<copy<<std::endl;
  
}




