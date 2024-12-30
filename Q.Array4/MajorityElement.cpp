#include<bits/stdc++.h>
using namespace std;


//beter approach, (takes O(n log n)+O(n) time)
int majorEl(vector<int> &arr, int n){
  unordered_map<int, int> mpp;
  for(int i=0; i<n; i++){
    mpp[arr[i]]++;
  }
  for(auto x: mpp){
    if(x.second > n/2) return x.first;
    }
  return -1;
}

// optimal approach, (takes O(n) time) (Moore's Voting Algorithm)
int majorEl2(vector<int> &arr, int n){
  int count = 0, el;
  for(int i=0; i<n; i++){
    if(count == 0) el = arr[i];
    if(arr[i] == el) count++;
    else count--;
  }
  int c1 = 0;
  for(int i=0; i<n; i++){
    if(arr[i] == el) c1++;
  }
  if(c1 > n/2) return el;
 return -1;
}

int main(){
  vector <int> arr = {3, 3, 2, 2, 4, 4, 2, 2, 2};
  int n = arr.size();
  cout<<majorEl(arr, n);
  cout<<endl;
  cout << majorEl2(arr, n);
  return 0;
}
