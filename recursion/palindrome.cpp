#include<iostream>  
#include<vector>
#include<string>
using namespace std;


bool isPalindrome(int i, string s){
  int size = s.size() - 1;
  if(i >= size/2){
    return true;
  }
  if(s[i] != s[s.size()-i-1]){
    return false;
  }
  return isPalindrome(i+1, s);
}



int main() {
    string s;
    cin >> s;

    cout << boolalpha << isPalindrome(0, s) << endl;
    return 0;
}
