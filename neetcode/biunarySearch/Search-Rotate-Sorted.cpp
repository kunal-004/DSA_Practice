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

//second case (   duplicate elements)
void searchRotate2(vector<int> &arr1, int n, int key ){
  int low = 0, high = n-1;
  while(low<=high){
    int mid = low + (high-low)/2;
    if(arr1[mid]==key){
      cout<<"Index of key is: "<<mid<<endl;
      return;
    }
    if(arr1[low]==arr1[mid] && arr1[mid]==arr1[high]){
      low++; high--;
    }else if(arr1[low]<=arr1[mid]){
      if(arr1[low]<=key && key<arr1[mid]){
        high = mid-1;
      }else{
        low = mid+1;
      }
    }else{
      if(arr1[mid]<key && key<=arr1[high]){
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
  vector <int> arr1 = {2,5,6,2,2,2,2,2,2,2,2,2};
  int n2 = arr1.size();
  cout << "Second case: "<<endl;
  searchRotate2(arr1,n2,key);
}
