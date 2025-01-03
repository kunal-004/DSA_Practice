#include<bits/stdc++.h>
using namespace std;

void binarySearch(vector<int> &arr, int n  , int k){
 int low = 0, high = n-1;
 while(low<=high){
  int mid = low + (high-low)/2;
  if(arr[mid]==k){
    cout << "Element found at index: " << mid << endl;
    return;
  }else if(k< arr[mid]){
    high = mid-1;
  }else{
    low = mid+1;
  }
 }
  cout << "Element not found" << endl;
}

// recursive approach
void binarySearchRecursive(vector<int> &arr, int n, int k, int low, int high){
  int mid = low + (high-low)/2;
    if(low>high){
    cout << "Element not found" << endl;
    return;
    }

    if(arr[mid]==k){
      cout << "Element found at index: " << mid << endl;
      return;
    }
    
     if(k<arr[mid]){
      binarySearchRecursive(arr, n, k, low, mid-1);
    }else{
      binarySearchRecursive(arr, n, k, mid+1, high);
    }
}

int main(){
  vector<int> arr= {1,2,3,4,5};
  int n = arr.size();
  int k = 5;
  binarySearch(arr, n, k);
  cout << "Recursive approach: ";
  binarySearchRecursive(arr, n, k, 0, n);
}
