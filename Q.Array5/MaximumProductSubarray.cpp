#include<bits/stdc++.h>
using namespace std;


// brute approach 
void maxProduct(vector<int> &arr, int n){
  int maxi=INT_MIN;
  for(int i=0; i<n; i++){
    int pr=1;
    for(int j=i; j<n; j++){
       pr = pr*arr[j];
       maxi = max(maxi, pr);
    }
  }
  cout<< maxi << endl;
}

// optimal approach
void maxProduct2(vector<int> &arr, int n){
  int pre=1,suff=1;
  int ans=0;
  for(int i=0; i<n; i++){
    if(pre==0) pre=1;
    if(suff==0) suff=1;

    pre = pre*arr[i];
    suff= suff*arr[n-i-1];

    ans=max(ans, max(pre, suff));
  }
  cout<< ans << endl;
}

int main(){
  vector<int> arr= {1,2,8,-2,5};
  int n = arr.size();
  maxProduct(arr, n);
  maxProduct2(arr, n);
}
