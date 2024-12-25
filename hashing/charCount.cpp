#include<iostream>
#include<string>
using namespace std;

int main(){
  string s;
  cout << "Enter the string: ";
  cin >> s;


  //precompute
  int hash[256]= {0};
  for(int i=0; i<s.size(); i++){
    hash[s[i]] += 1;
  }

  int q;
  cout << "Enter the number of queries: ";
  cin >> q;
  while(q--){
    char c;
    cout << "Enter the char to be searched: ";
    cin >> c;


    cout << "--------------------------------------" << endl;

    //fetch
    cout << "The char " << c << " is present " << hash[c] << " times." << endl;
  }
}
