#include<iostream>  
#include<vector>
using namespace std;


void reverseArr(vector <int> &arr, int l, int r){
  if(l>=r){
    return;
  }
  swap(arr[l], arr[r]);
  reverseArr(arr, l+1, r-1);
}


void reverseArr2(vector <int> &arr){
  static int l = 0;
  int r = arr.size()-1-l;
  if(l>=r){
    return;
  }
  swap(arr[l], arr[r]);
  l++;
  reverseArr2(arr);
}


int main() {
   vector <int> arr = {1,2,3,4,5};
    reverseArr(arr, 0, arr.size()-1);
    for(int i=0; i<arr.size(); i++){
      cout<<arr[i]<<" ";
    }
    cout<<"new" <<endl;
    reverseArr2(arr);
    for(int i=0; i<arr.size(); i++){
      cout<<arr[i]<<" ";
    }

    return 0;
}
