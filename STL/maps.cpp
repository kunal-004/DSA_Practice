#include<bits/stdc++.h>
#include <set>
using namespace std;

int main() {
  map<int, int> m;

  map<pair<int, int>, int> m2;
  m[1] = 100;
  m[2] = 200;

  cout << m[1] << endl;

  m2[{1, 2}] = 100;
  m2[{2, 3}] = 200;

  for(auto x: m2){
    cout << x.first.first << " " << x.first.second << " " << x.second << endl;
  }

  auto it1= m.lower_bound(2);
  auto it2= m.upper_bound(3);

  cout << it1->first << " " << it1->second << endl;


  return 0;
}
