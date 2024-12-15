#include<iostream>
using namespace std;


class Player{
  public:
  // attributes
  string name;
  int health;
  int xp;

  // methods
  void set_name(string name_val){
    name = name_val;
  }

  string get_name(){
    return name;
  }

  Player(){
    name = "None";
    health = 100;
    xp = 3;
  }
};

int main(){
  Player frank;
  frank.set_name("Frank");
  cout << frank.get_name() << endl;

  return 0;
}
