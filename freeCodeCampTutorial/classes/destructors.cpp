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

/*** This function will have its local objects deleted when out of scope ***/
void someFunction(){
    Dog d1("Fido","Shepherd",2);
}
void someFunc(Dog dog){
    dog.setName("George");
    std::cout<<"Funky"<<std::endl; 
} // George gets deleted once we leave this function :(

void function3(){
    Dog* d1=new Dog("Lassie","Collie",5);  // Need a delete after this
    delete d1;
}


int main()
{
    Dog d1("Fluffy","Husky",9);
    someFunc(d1);
    someFunction();
    function3();
    std::cout<<"Done with the main function!"<<std::endl;
    //return 0;
}
