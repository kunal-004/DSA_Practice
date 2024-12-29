#include<bits/stdc++.h>

using namespace std;

//brute force approach
int maxLength(vector <int> &arr, int n, int k){
  int maxLen = 0;
  int sum = 0;
  for(int i=0; i<n; i++){
    sum = 0;
    for(int j=i; i<n; j++){
      sum+=arr[j];
      if(sum == k){
        maxLen = max(maxLen, j-i+1);
      }
      else if(sum > k){
        break;
      }
    }
  }
  return maxLen;
}

//Optimal approach 
int maxLength2(vector <int> &arr, int n, int k){
  long long  maxLen = 0;
  long long left = 0, right = 0;
  long long  sum = arr[0];
  while(right < n){
    while(left <= sum & sum > k){
      sum -= arr[left];
      left++;
    }
    if(sum == k){
      maxLen = max(maxLen, right-left+1);
    }
    right++;
    if(right <n)sum += arr[right];
  }
  return maxLen;
}

// better approach
int maxLength3(vector <int> &arr, int n, int k){
    unordered_map<long long, int> prefixSum; 
    long long sum = 0;
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum == k) {
            maxLen = i + 1;
        }
        if (prefixSum.find(sum - k) != prefixSum.end()) {
            maxLen = max(maxLen, i - prefixSum[sum - k]);
        }
        if (prefixSum.find(sum) == prefixSum.end()) {
            prefixSum[sum] = i;
        }
    } 
    return maxLen;
}

int main(){
  vector <int> arr = {2,0,0,3};
  vector <int> arr2 = {2,0,-1,3};
  int k = 3;
  int n = arr.size();
  cout << maxLength(arr, n, k) << endl;
  cout << maxLength2(arr, n, k) << endl;
}
