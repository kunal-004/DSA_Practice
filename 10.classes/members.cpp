#include<iostream>
using namespace std;


class Player{
  public:
  // attributes
  string name;
  int health;
  int xp;

  // methods
  void talk(string text_to_say){
    cout << name << " says " << text_to_say << endl;
  }
  bool is_dead();
};

class Account{
  public:
  // attributes
  string name;
  double balance;

  // methods
  public:
  bool deposit(double);
  bool withdraw(double);
};


bool Account::deposit(double amount){
  balance += amount;
  cout << "In deposit" << endl;
  return true;
} 


int main(){
  Player frank;
  Account acc1;


  frank.name = "Frank";
  frank.health = 100;
  frank.xp = 12;
  frank.talk("Hi there");

  Player *enemy = new Player;
  (*enemy).name = "Enemy";
  (*enemy).health = 100;
   enemy->xp = 15; //easy way to access members of pointer


  delete enemy;

  acc1.deposit(1000);
  

  return 0;
}
