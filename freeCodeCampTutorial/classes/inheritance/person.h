#ifndef PERSON_H
#define PERSON_H

#include<string>
#include<string_view>
#include<iostream>


class Person{
  // This function is allegedly going to let us print out class data really easily
  friend std::ostream& operator<<(std::ostream& out, const Person& person);
  public:
    Person();
    Person(std::string fname, std::string lname);
    ~Person();
    
    int getAge(){
        return age;
    }
    std::string getLname() const{
        return lname;
    }
    std::string getFname() const{
        return this->fname;
    }
    
    void setFname(std::string_view fname){
        this->fname=fname;
    }
    
    void setLname(std::string_view lname){
        this->lname=lname;
    }
    
    void setAge(int age){
        this->age=age;
    }
    
  //public:
  protected: 
  //private:
    std::string fname="Pseudonymous";
    std::string lname="Bosch";
    int age=5;
};

#endif
