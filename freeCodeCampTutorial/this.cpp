#include<iostream>
#include <stdio.h>
#include<string>

class Dog{
    public: 
        Dog()=default;
        Dog(std::string name, std::string breed, int age);
        ~Dog();
        void setName(std::string name){
           this->name=name;
           /** This does weird things. Not sure if it's param or member
           name=name;
           ***/
        }
        void setBreed(std::string breed){
            this->breed=breed;
        }
        void setAge(int age){
            *(this->age)=age;;
        }
    private:
        std::string name;
        std::string breed;
        int *age=nullptr;
};

Dog::Dog(std::string name, std::string breed, int age){
    this->name=name;
    this->breed=breed;
    this->age=new int;
    *this->age=age;
    std::cout<<"Dog constructor called for "<<name<<" at "<<this<<std::endl;
}
Dog::~Dog(){
    delete age;
    std::cout<<"Dog destructor called for "<<name<<" at "<<this<<std::endl;
}

int main()
{
    Dog d1("Fluffy1","Husky",9);
    Dog d2("Fluffy2","Husky",9);
    Dog d3("Fluffy3","Husky",9);
    Dog d4("Fluffy4","Husky",9);
    d1.setName("Jack");
    std::cout<<"Done with the main function!"<<std::endl;
    //return 0;
}
