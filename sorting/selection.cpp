#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//my approach
void selectionSort1(vector<int> &arr, int n){
  for(int i=0; i<n-2; i++){
    swap(arr[i], *min_element(arr.begin()+i, arr.end()));
  }
  cout<<"Sorted array: ";
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
}

//other approach
void selectionSort2(vector<int> &arr, int n){
   for(int i=0; i<n-2; i++){
    int mini=i;
    for(int j=i; j<n-1; j++){
      if(arr[j]<arr[mini]){
        mini=j;
      }
    }
    swap(arr[i], arr[mini]);
   }
  cout<<"Sorted array 2: ";
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
    
  }
}

int main(){
  vector<int> arr = {5, 2, 4, 6, 1, 3};
  int n = arr.size();
  selectionSort1(arr, n);
  selectionSort2(arr, n);
}
