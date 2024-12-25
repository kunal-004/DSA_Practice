#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//my approach
void bubbleSort1(vector<int> &arr, int n){
  for(int i=0; i<n-1; i++){
    int didSwap = 0;
    for(int j=0; j<n-i; j++){
      if(arr[j] > arr[j+1]){
        swap(arr[j], arr[j+1]);
        didSwap = 1;
      }
    }
    if(!didSwap) break; // gives O(n) time complexity for sorted array otherwise O(n^2)
  }
  cout<<"Sorted array: ";
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  vector<int> arr = {1, 2, 3, 4, 5, 6};
  int n = arr.size();
  bubbleSort1(arr, n);
}
