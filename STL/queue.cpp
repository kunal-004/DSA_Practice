#include<bits/stdc++.h>
#include<string>
using namespace std;

int main() {
  queue<int> q;

  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);

  cout << q.front() << " " << q.back() << endl;

  q.pop();
  cout << q.front() << " " << q.back() << endl;

  cout << q.size() << endl;
  cout << q.empty() << endl;

   q.back()+=50 ;
  cout << q.front() << " " << q.back() << endl;

  return 0;
}
