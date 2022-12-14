#include<iostream>
#include <stdio.h>

class Dog{
    public: 
        Dog()=default;
        Dog(std::string_view name1, std::string_view breed1, int age1);
        ~Dog();
        void setName(std::string n){
            name=n;
        }
    private:
        std::string name;
        std::string breed;
        int *age=nullptr;
};

Dog::Dog(std::string_view name1, std::string_view breed1, int age1){
    name=name1;
    breed=breed1;
    age=new int;
    *age=age1;
    std::cout<<"Dog constructor called for "<<name<<std::endl;
}
Dog::~Dog(){
    delete age;
    std::cout<<"Dog destructor called for "<<name<<std::endl;
}

int main()
{
    Dog d1("Fluffy1","Husky",9);
    Dog d2("Fluffy2","Husky",9);
    Dog d3("Fluffy3","Husky",9);
    Dog d4("Fluffy4","Husky",9);
    
    std::cout<<"Done with the main function!"<<std::endl;
    //return 0;
}
