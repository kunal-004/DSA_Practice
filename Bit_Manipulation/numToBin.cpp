#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// Function to convert a binary to number

int binToNum(string bin){
  int num = 0;
  int pow = 1;
  int len = bin.length();
  for(int i=len-1; i>=0; i--){
    if(bin[i]=='1'){
      num += pow;
    }
    pow = pow*2;
  }
  return num;
}

int main(){
  int num;
  cin>>num;
  string bin = "";

  while(num>=1){
    if(num%2==1){
      bin = "1";
    }else{
      bin = "0";
    }
    num = num/2;

    reverse(bin.begin(), bin.end());
    cout<<bin;
  }
  cout<<endl;

  string BINARY;
  cin>>BINARY;
  cout<<binToNum(BINARY)<<endl;

  return 0;
}
