#include<bits/stdc++.h>

using namespace std;

// 1st optimal approach
void missingNum(vector <int> arr, int n){
  int sum = 0;
  int total = (n+1)*(n+2)/2;
  for(int i=0 ; i<n ; i++){
    sum += arr[i];
  }
  if(sum == total){
    cout << "No missing number" << endl;
  }
  else{
    cout << "Missing number is: " << total-sum << endl;
  }
}

// 2nd optimal approach
void missingNum2(vector<int> arr, int n){
  int xor1 = 0, xor2 = 0;
  for(int i=0; i<n; i++){
     xor2 = xor2 ^ arr[i];
     xor1 = xor1 ^ (i+1);
  }
  xor1 = xor1 ^ (n+1);
  cout << "Missing number is: " << (xor1 ^ xor2) << endl;
}

int main(){
  vector <int> arr = {1,2,3,5};
  int n = arr.size();
  missingNum(arr, n);
  missingNum2(arr, n);
}
