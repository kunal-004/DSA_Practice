#include<bits/stdc++.h>
using namespace std;

int main() {
  list<int> l;
  l.push_back(1);
  l.emplace_back(2);
  l.push_front(3);

  for(auto i: l) cout << i << " ";

  list<pair<int, int>>l1;
  l1.emplace_back(1, 2);
  l1.push_back({3, 4});
  for(auto i: l1) cout << i.first << " " << i.second << " ";
  return 0;
}
