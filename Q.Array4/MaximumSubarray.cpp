#include<bits/stdc++.h>
using namespace std;


// brtue force approach, (takes O(n^2) time)
int maxSubArr(vector<int> &arr, int n){
  int maxSum = INT_MIN;
  for(int i=0; i<n; i++){
    int sum=0;
    for(int j=0; j<n; j++){
      sum += arr[j];
      maxSum = max(sum, maxSum);
    }
  }
  return maxSum;
}

// Kadane's Algorithm (takes O(n) time)
int maxSubArr2(vector<int> &arr, int n){
  int maxSum = INT_MIN;
  int sum = 0;
  for(int i=0; i<n; i++){
    sum += arr[i];
    maxSum = max(sum, maxSum);
    if(sum <0) sum = 0;
  }
  return maxSum;
}

int main(){
  vector<int> arr = {1,3,5 ,-2,7, 5,0,-2};
  int n = arr.size();
  cout<<maxSubArr(arr, n);
  cout << endl;
  cout<<maxSubArr2(arr, n);
  return 0;
}
