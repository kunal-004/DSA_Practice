#include<bits/stdc++.h>
using namespace std;

// This is the optimal approach
void findOnce(vector <int> &arr, int n){
  int res = 0;
  for(int i=0; i<n; i++){
    res = res ^ arr[i];
  }
  cout<<res;
}

// This is a brute force approach
void findOnce2(vector <int> &arr, int n){
  for(int i=0; i<n; i++){
     int count = 0;
    for(int j=0; j<n; j++){
      if(arr[i] == arr[j]){
        count++;
      }
    }
    if(count == 1){
      cout<<arr[i];
      break;
    }
  }
}

int main(){
  vector <int> arr = {2,2,3,3,4,5,5};
  int n = arr.size();
  findOnce(arr, n);
  findOnce2(arr, n);
}
