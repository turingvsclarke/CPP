// Example program
#include <iostream>
#include <string>
#include <cmath>

int main()
{
    int a=15;
    int b=1;
    int c=10;
    std::cout<<std::boolalpha;
    if(!(a<=b || a>=c)){
        std::cout<<a<<" is between "<<b<<" and "<<c<<std::endl;    
    }
    
    else if(a==b){
        std::cout<<a<<" is equal to "<<b<<std::endl;    
    }
    else if(a==c){ 
        std::cout<<a<<" is equal to "<<c<<std::endl;    
    }
    
    else{
        std::cout<<a<<" is not between "<<b<<" and "<<c;    
    }
}
