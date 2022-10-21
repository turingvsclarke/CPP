// Example program
#include <iostream>
#include <string>

int main()
{
 /*** This doesn't run b/c no size or initialization 
 int y[];
 ***/
 int y[10];
 /** It will let me add values to y out of range ***/
 for(int i=0;i<100;i++){
    y[i]=i*5;
 }
 for(int i=0;i<100;i++){
    std::cout<<y[i]<<std::endl;
 }

 // z will have its size automatically set to 6
 int z[]={1,2,3,4,5,6};
 // The last two entries in x will be set to zero.
 int x[7]={1,2,11,4,56};
 for(int i=0;i<7;i++){
     std::cout<<"The element at index "<<i<<" is "<<x[i]<<std::endl;
     }
     
 for(auto value : z){
     std::cout<<"The element at index "<<value<<" is "<<z[value-1]<<std::endl;
     }
     
    std::string a[]={"hi","bye","later"};
    
    for(std::string value : a){    
        std::cout<<value<<std::endl;
    }
     
     
}
