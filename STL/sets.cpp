#include<bits/stdc++.h>
#include <set>
using namespace std;

int main() {
  set<int> s;
  s.insert(1);
  s.insert(2);
  s.insert(3);

  cout << s.size() << endl; 
  cout << s.count(2) << endl; 
  if(s.find(2) != s.end()){
    cout << "Found" << endl;
  }
  return 0;
}
