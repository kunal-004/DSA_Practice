#include<bits/stdc++.h>
using namespace std;

int main() {
  stack<int> s;
  s.push(22);
  s.push(33);
  s.push(44);
  s.push(55);
  cout << s.top() << endl;
  s.pop();
  cout << s.top() << endl;
  cout << s.size() << endl;
  cout << boolalpha << s.empty() << endl; // not empty

  stack <pair<int, int>> p;
  p.push({1, 2});
  p.push({3, 4});
  cout << p.top().first << endl;
  cout << p.top().second << endl;
  p.pop();
  cout << p.top().first << endl;
  cout << p.top().second << endl;


  return 0;
}
