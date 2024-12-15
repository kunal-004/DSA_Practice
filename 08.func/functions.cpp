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

  return 0;
}                                           
