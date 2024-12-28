#include<bits/stdc++.h>
using namespace std;

void maxConsecutive(vector <int> &arr, int n){
  int maxC= 0;
  for(int i=0; i<n; i++){
    int count = 0;
    while(arr[i] == 1){
      count++;
      i++;
    }
    maxC = max(maxC, count);
  }
  cout<<maxC;
}

int main(){
  vector <int> arr = {1,1,0,1,1,0,1,1,1,1,1,0,1,1,1};
  int n = arr.size();
  maxConsecutive(arr, n);
}
