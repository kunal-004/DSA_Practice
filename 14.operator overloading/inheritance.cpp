#include<iostream>

using namespace std;


class User{
  public:
  string name = "no name";
  int age = 0;
  User(string name, int age){
    this->name = name;
    this->age = age;
  }
};

class Teacher : public User{
  public:
  int id = 0;
  Teacher(string name, int age, int id) : User(name, age){
    this->id = id;
  }
};



int main(){
  User user("John", 25);
  cout << user.name << " " << user.age << endl;
  Teacher teacher("Jane", 35, 1);
  cout << teacher.name << " " << teacher.age << " " << teacher.id << endl;
  return 0;
}
