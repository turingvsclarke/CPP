#include<string>
class Person{
  public:
    std::string f_name;
    std::string l_name;
    int getAge(){
        return age;
    }
    void setAge(int age){
        this->age=age;
    }
  private:
    int age;
};
