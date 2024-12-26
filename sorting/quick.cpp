#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int Parition(vector<int> &arr, int high, int low){
  int pivot = arr[low];
  int i = low;
  int j = high;
  do{
    do{i++;}while (arr[i]<= pivot);  
    do{j--;}while (arr[j]> pivot);

    if(i<j){
      swap(arr[i], arr[j]);
    }
  }
  while(i<j);
  swap(arr[low], arr[j]);
  return j;
}

void quickSort(vector<int> &arr, int high, int low){
  if(low<high){
    int j = Parition(arr, high, low);
    quickSort(arr, j, low);
    quickSort(arr, high, j+1);
  }
}


int main(){
  vector<int> arr = {23, 45, 12, 67, 34, 90, 1};
  int n = arr.size();
  quickSort(arr, n, 0);
  cout<<"Sorted array: ";
  for(int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
  }
}
