#include<bits/stdc++.h>
using namespace std;


//beter approach, (takes O(2n) time)
void SortArr(vector<int> &arr, int n){
  int c1 = 0, c2 = 0, c3 = 0;
  for(int i=0; i<n; i++){
    if(arr[i] == 1) c1++;
    else if(arr[i] == 2) c2++;
    else c3++;
  }
  for(int i=0; i<c1; i++) arr[i] = 0;
  for(int i=c1; i<c1+c2; i++) arr[i] = 1;
  for(int i=c1+c2; i<n; i++) arr[i] = 2;
}

// optimal approach, (takes O(n) time) (Dutch National Flag Algorithm)
void SortArr2(vector<int> &arr, int n){
   int low = 0, mid = 0, high = n-1;
   while(mid <= high){
    if(arr[mid]==0){
      swap(arr[low], arr[mid]);
      low++;
      mid++;
    }else if(arr[mid]==1){
      mid++;
    }else {
      swap(arr[mid], arr[high]);
      high--;
    }
   }
}

int main(){
  vector<int> arr = {0, 1, 2, 0, 1, 2, 0, 1, 2};
  int n = arr.size();
  SortArr(arr, n);
  for(int i=0; i<n; i++) cout<<arr[i]<<" ";
  cout<<endl;
  SortArr2(arr, n);
  for(int i=0; i<n; i++) cout<<arr[i]<<" ";
  return 0;
}
