#include<iostream>  
using namespace std;

// paramirized solution
void sumN(int n, int sum = 0) {
  if(n==0){
    cout << sum << endl;
    return;
  }
  sumN(n-1, sum+=n);
}

//funstional solution
int sumN2(int n){
  if(n==0){
    return 0;
  }
  return n+sumN2(n-1);
}

int factN(int n){
  if(n==0){
    return 1;
  }
  return n*factN(n-1);
}

int factN2(int n){
  if(n<0){
    return -1;
  }else if(n==0){
    return 1;
  }
  int fact = 1;
  for(int i=2; i<=n; i++){
    fact *= i;
  }
  return fact;
}

int main() {
    sumN(3, 0);
    cout << sumN2(3) << endl;
    cout << factN(4) << endl;
    cout << factN2(4) << endl;
    return 0;
}
