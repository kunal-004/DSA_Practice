#include<bits/stdc++.h>
using namespace std;


void buyAndSell(vector<int> &arr, int n){
  int mini = arr[0];
  int maxProfit=0;
  for(int i=1; i<n; i++){
    int cost = arr[i] - mini;
    maxProfit = max(maxProfit, cost);
    mini = min(mini, arr[i]);
  }
  cout << "Max profit is: " << maxProfit << endl;
}

int main(){
  vector<int> arr = {7,1,5,3,6,4};
  int n = arr.size();
  buyAndSell(arr, n);
}
