#include<bits/stdc++.h>
using namespace std;

// brute force approach
vector<int> intersectionArray(vector<int> a, vector<int> b){
  vector<int> res;
    vector<bool> visited(b.size(), false);  

    for(int i = 0; i < a.size(); i++) {
        for(int j = 0; j < b.size(); j++) {
            if(a[i] == b[j] && !visited[j]) {
                res.push_back(a[i]);
                visited[j] = true;
                break;
            }
        }
    }  
    return res;
}

// optimized approach
vector<int> intersectionArray2(vector<int> &a, vector<int> &b){
   sort(a.begin(), a.end());
   sort(b.begin(), b.end());
  vector<int> res;
  int j = 0 , i = 0;
  int n = a.size(), m = b.size();
  while(i < n && j < m){
    if(a[i] < b[j]){
      i++;
    }else if(a[i] > b[j]){
      j++;
    }else{
      res.push_back(a[i]);
      i++;
      j++;
    }
  }
  return res;
}

int main(){
  vector<int> a = {1, 2, 3, 4, 5, 6};
  vector<int> b = {4, 5, 1, 2};
  
  vector<int> result = intersectionArray(a, b);
  cout << "intersection of two arrays is: ";
  for(auto i: result){
    cout << i << " ";
  }

  cout << endl;

  vector<int> result2 = intersectionArray2(a, b);
  cout << "intersection of two arrays is: ";
  for(auto i: result2){
    cout << i << " ";
  }
  return 0;
}
