#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
  vector<int> v;
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  cout << v[0] << endl;

  vector< pair <int, int> > v1;
  v1.push_back({1, 2});
  cout << v1[0].first << " " << v1[0].second << endl;

  vector< pair <int, pair<int , string>>> v2;
  v2.push_back({8,{ 9, "ongo"}});
  v2.emplace_back(10, make_pair(6, "hello"));

  for(int i=0; i<v2.size(); i++) {
    cout << v2[i].first << " " << v2[i].second.first << " " << v2[i].second.second << endl;
  }

  vector<int>::iterator it = v.begin();
  it++;
  cout << *it << endl;

  vector<int>::iterator it2 = v.end() -1; //use -1 to get the last element
  cout << *it2 << endl;

  cout << v.front() << " " << v.back() << endl; // equivalent to v[0] and v[v.size()-1]

  //insert , delete
  vector <int> o3 {1, 2, 3, 4, 5};
  o3.erase(o3.begin(), o3.end()-1);
  cout << o3[0] << endl;
  o3.insert(o3.begin(), 200);
  cout << o3[0] << endl;
  return 0;
}
