#include<bits/stdc++.h>
#include<string>
using namespace std;

int main() {
  pair<int, string> p= {1, "abc"};
  cout << p.first << " " << p.second << endl;

  pair<int, pair<int, int>> p1= {1, {2, 3}};
  cout << p1.first << " " << p1.second.second << endl;

  pair<int, int> p2[]= {{1, 2}, {3, 4}, {5, 6}};
  cout << p2[1].first << " " << p2[1].second;
  cout << p2[2].second << endl;

  return 0;
}
