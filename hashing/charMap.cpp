#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
   string s;
   cout << "Enter the string: ";
   cin >> s;

    //precomputation
    map<char, int> hashM;
    for(int i=0; i<s.size(); i++){
        hashM[s[i]]++;
    }

    for(auto it: hashM){
        cout << it.first << " ->" << it.second << endl;
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;
    while(q--){
      char c;
      cout << "Enter the element to be searched: ";
      cin >> c;

      //fetch
      cout << "The element " << c << " is present " << hashM[c] << " times." << endl;
    }

}
