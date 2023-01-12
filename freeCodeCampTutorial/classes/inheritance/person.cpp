
#include "person.h"
Person::Person(){
    
}
Person::Person(std::string fname, std::string lname){
    this->fname=fname;
    this->lname=lname;
}

Person::~Person(){
    
}

// This function is allegedly going to let us print out class data really easily
std::ostream& operator<<(std::ostream& out, const Person& person){
    out<<"Person : ["<<person.fname<<" "<<person.lname<<"]";
    return out;
}
