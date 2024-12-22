#include<bits/stdc++.h>
#include <set>
using namespace std;

int main() {
  multiset<int> s;
  s.insert(1);
  s.insert(2);
  s.insert(3);

  cout << s.size() << endl;
  cout << s.count(2) << endl;
  s.erase(s.find(2));
  cout << s.size() << endl;
  if(s.find(3) != s.end()){
    cout << "Found" << endl;
  }


  return 0;
}
