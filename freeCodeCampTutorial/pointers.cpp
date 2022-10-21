// Example program
#include <iostream>
#include <string>
#include <cmath>

int main()
{
    int * p_number;
    std::string * p_string;
    int x=5;
    p_number=&x;
    std::cout<<"Value of x: "<<x<<std::endl;
    std::cout<<"Value of x gotten by dereferencing pointer: "<<*p_number<<std::endl;
    std::cout<<"Int pointer size: "<<sizeof(p_number)<<std::endl;
    std::cout<<"String pointer size: "<<sizeof(p_string)<<std::endl;
    std::cout<<"Address of x: "<<&x<<std::endl;
    
    std::cout<<"Doing the exact same thing with characters"<<std::endl;
    char * p_char;

    char y=5;
    p_char=&y;
    std::cout<<"Value of y: "<<y<<std::endl;
    std::cout<<"Value of y gotten by dereferencing pointer: "<<*p_char<<std::endl;
    std::cout<<"Char pointer size: "<<sizeof(p_char)<<std::endl;
 
    std::cout<<"Address of y: "<<p_char<<std::endl;
    
    std::cout<<"Assigning pointers to arrays"<<std::endl;
    // Note that if we were allowed to change 'h', then message wouldn't actually point to anything but something mutable so not a definite thing
    const char* message={"hello"}; // Treating a string as a pointer using c-literals
    std::cout<<"Trying to print out the pointer: "<<message<<std::endl;
    std::cout<<"Dereferencing the pointer and printing the result: "<<*message<<std::endl;
    // Printing the pointer yields the message, but we find in the second print statement that the pointer only
    // points to the FIRST character of our character array.
}
