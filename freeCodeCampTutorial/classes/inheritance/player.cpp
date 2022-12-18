#include "person.cpp"
#include<iostream>
class Person;

class Player:private Person {
  public:
    Player(std::string fname,std::string lname){
        f_name=fname;
        l_name=lname;
        this->setAge(5);
    }
    void printFname(){
        std::cout<<"The first name is "<<f_name<<std::endl;
        std::cout<<"The age is "<<this->getAge()<<std::endl;
    }
};


int main(){
    Player p1("Bob","Saget");
    p1.printFname();
} // end main
