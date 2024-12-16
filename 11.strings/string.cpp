#include<iostream>
#include<string>
#include <algorithm>

using namespace std;


int main(){
  string s1 = "Hello";
  const bool found = s1.find("lo");
  cout << found << endl;
  if(found != string::npos){
    cout << "Found" << endl;
  }else{
    cout << "Not Found" << endl;
  }

  string s2 = "Today is a beautiful day";
  reverse(s2.begin(), s2.end()); // reverse the string

  cout << s2 << endl;

  return 0;
}
