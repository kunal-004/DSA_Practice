#include<bits/stdc++.h>
using namespace std;

void searchRotate(vector<int> &arr,int n, int key){
  int low=0, high=n-1;
  while(low<=high){
    int mid = low + (high-low)/2;
    if(arr[mid]==key){
      cout<<"Index of key is: "<<mid<<endl;
      return;
    }
    if(arr[low]<=arr[mid]){
      if(arr[low]<=key && key< arr[mid]){
      high = mid-1;
      }else{
        low = mid+1;
      }
    }else{
      if(arr[mid]<key && key<=arr[high]){
        low = mid+1;
      }else{
        high = mid-1;
      }
    }
  }   
}

int main(){
  vector <int> arr = {5,6,7,1,2,3,4};
  int n = arr.size();
  int key = 2;
  searchRotate(arr,n,key);
}
