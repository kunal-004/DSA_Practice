#include <iostream>
#include <string>

using namespace std;

int main() {

  int num1{30000};
  int num2{1000};
  // int binary{0b101}; //c++ 14 
  // cout << "Binary: " << binary << endl;

  int result{num1 * num2};
  cout << "Result: " << result << endl;
  clog << "Result: " << result << endl;

  // int age;
  // string name;
  // cout << "Enter your age: ";
  // cout << "Enter your name: ";
  // cin >> age >> name;
  // cout << "Your name is: " << name << " and your age is: " << age << endl;


  bool isTrue{true};
  cout << "Is true: " << isTrue << endl;
  bool isFalse{false};
  cout << "Is false: " << boolalpha << isFalse << endl;

  char chary = 65;
  cout << "Char: " << static_cast<int>(chary) << endl;
  cout << "Char: " << chary << endl;

  return 0;
}
