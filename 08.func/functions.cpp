#include <iostream> 
using namespace std;


int power(int exponent, int base){

  cout << "Calculating " << exponent << " to the power of " << base << endl;

  int result = 1;
  for(int i=0; i < exponent; i++){
    result = result * base;
  }
  return result;
}


int main(){
  cout << "Enter exponent" << endl;
  int exponent;
  cin >> exponent;

  cout << "Enter base" << endl;
  int base;
  cin >> base;

  cout << "Result: " << power(exponent, base) << endl;

  char x = '^';
  cout << (x) << "yessssssss\t less go" << endl;


  double y = 3.14;
  y = y * 2053500006.354536565456542636;
  cout << fixed << y << endl;

  return 0;
}                                           
