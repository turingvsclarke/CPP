#include<string>
class Person{
  // This function is allegedly going to let us print out class data really easily
  friend std::ostream& operator<<(std::ostream& out, const Person& person);
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
    int age=5;
};
