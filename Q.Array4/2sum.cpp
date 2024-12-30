#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//better approach
vector<int> twoSum(vector<int> &arr, int n, int target){
  unordered_map<int, int> mpp;
  for(int i=0; i<n; i++){
     int a = arr[i];
     int more = target - a;
    if(mpp.find(more) != mpp.end()){
      cout << "Found";
      return {mpp[i], i};
    }
    mpp[arr[i]] = i;
  }
  cout << "Not Found";
  return {
    -1, -1
  };
}

int main(){
  vector<int> arr = {2, 11, 7, 15};
  int target = 9;
  int n = arr.size();
  vector<int> res = twoSum(arr, n, target);
  for(int i=0; i<res.size(); i++){
    cout << res[i] << " ";
    }
  return 0;
  }
