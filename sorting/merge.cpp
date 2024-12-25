#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int> &arr, int mid, int low , int high){
  vector<int> temp;
  int left = low;
  int right = mid+1;
  while(left<=mid && right<=high){
    if(arr[left]<arr[right]){
      temp.push_back(arr[left]);
      left++;
    }else{
      temp.push_back(arr[right]);
      right++;
    }
  }
  while(left<=mid){
    temp.push_back(arr[left]);
    left++;
  }
  while(right<=high){
    temp.push_back(arr[right]);
    right++;
  }
  for(int i=low; i<=high; i++){
    arr[i] = temp[i-low];
  }
}

void mergeSort(vector<int> &arr, int low, int high){
  if(low >= high) return;
  int mid = (low + high)/2;
  mergeSort(arr, low, mid);
  mergeSort(arr, mid+1, high);
  merge(arr, mid, low, high);
}

int main(){
  vector<int> arr = {12, 11, 13, 5, 6, 7};
  mergeSort(arr, 0, arr.size()-1);
  cout << "Sorted array is \n";
  for(int i=0; i<arr.size(); i++){
    cout << arr[i] << " ";
  }
}
