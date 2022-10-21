// Example program
#include <iostream>
#include <string>

int main()
{
  int tool=8;
  switch(tool){
    
    case 8: {
        std::cout<<"Active tool is pen"<<std::endl;
        }  
    break;
        
    case 4: {
        std::cout<<"Active tool is marker"<<std::endl;
        }
    break;
    
    default: {
        std::cout<<"Can't match any tool"<<std::endl;
        }
    }
    
    int x=(5>3)?5:3;
    std::cout<<x;
  
    for(int j=0;j<10;j++){
      std::cout<<j<<std::endl;
    }
}
