#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//my approach
void insertionSort1(vector<int> &arr, int n){
  for(int i=0; i<=n-1; i++){
     int j = i;
    while(j>0 && arr[j-1]>arr[j]){
      swap(arr[j], arr[j-1]);
      j--;
    }
  }
  cout<<"Sorted array: ";
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  vector<int> arr = {1, 6, 3, 4, 2, 5};
  int n = arr.size();
  insertionSort1(arr, n);
}
