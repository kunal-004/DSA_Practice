#include<bits/stdc++.h>
using namespace std;

//brute force approach
void secondLarge1(vector<int> &arr, int n){
  sort(arr.begin(), arr.end());
  int lrg = arr[n-1];
  for(int i = n-2; i >= 0; i--){
    if(arr[i] < lrg){
      cout << "Second largest element is: " << arr[i] << endl;
      break;
    }
    }
}

//optimized approach
int secondLarge2(vector<int> &arr, int n){
  int lrg=arr[0], slrg = INT_MIN;
  for(int i: arr){
    if(i > lrg){
      slrg = lrg;
      lrg = i;
    }
    if(i>slrg && i!=lrg){
        slrg = i;
      }
  }
  return slrg == INT_MIN ? -1 : slrg;
}


int main(){
  vector<int> arr = {1, 2, 3, 44, 24,34, 67, 89, 90, 100};
  int n = arr.size();
  secondLarge1(arr, n);
  secondLarge2(arr, n);
}
