#include<bits/stdc++.h>
using namespace std;

int lowB(vector <int> &arr, int n, int x){
  int low=0,high=n-1;
  int ans=n;
  while(low<=high){
    int mid = low + (high-low)/2;
    if(arr[mid]>=x){
      ans = mid;
      high = mid-1;
    }else{
      low = mid+1;
    }
  }
  return ans;
}

//with stl
int lowB2(vector <int> &arr, int n, int x){
  int ans = lower_bound(arr.begin(), arr.end(), x) - arr.begin(); //returns the iterator that why subtract it with begin.
  return ans;
}

//with array of specific range
int lowB3(int arr[], int n, int x){
  int ans  = lower_bound(arr+2, arr+7, x) - arr;
  return ans;
}

int upB(vector <int> &arr, int n, int x){
  int low=0,high=n-1;
  int ans=n;
  while(low<=high){
    int mid = low + (high-low)/2;
    if(arr[mid]>x){
      ans = mid;
      high = mid-1;
    }else{
      low = mid+1;
    }
  }
  return ans;
}


// INSERT ELEMENT IN SORTED ARRAY
int insertEl(vector<int> &arr, int n, int x){
  int low=0, high=n-1;
  int ans = n;
  while(low<=high){
    int mid = low + (high-low)/2;
    if(arr[mid]>=x){
      ans = mid;
      high = mid-1;
    }else{
      low = mid+1;
    }
  }
}

int main(){
  vector<int> arr= {1,2,3,5};
  int n = arr.size();
  int x = 4;
  cout << lowB(arr, n, x) << endl;
  cout << lowB2(arr, n, x) << endl;

  int arr2[] = {1,2,3,5,6,7};
  int n2 = 7;
  int x2 = 4;
  cout << lowB3(arr2, n2, x2) << endl;

  cout << upB(arr, n, 7) << endl;

  return 0;
}
