#include<bits/stdc++.h>
using namespace std;

// optimal approach for even and  array
void rearrange(vector<int> arr, int n){
     vector <int> res(n,0);
     int posIndex = 0, negIndex = 1;
     for(int i = 0; i < n; i++){
      if(arr[i] >= 0){
        res[posIndex] = arr[i];
        posIndex += 2;
      }else{
        res[negIndex] = arr[i];
        negIndex += 2;
      }
   }
    for(int i = 0; i < n; i++){
      cout<<res[i]<<" ";
    }
}

// optimal approach for odd array
void rearrange2(vector<int> arr, int n){
  vector <int> pos, neg;
  for(int i = 0; i < n; i++){
    if(arr[i] >= 0){
      pos.push_back(arr[i]);
    }else{
      neg.push_back(arr[i]);
    }
  }
  int i = 0, j = 0, k = 0;
  while(i < pos.size() && j < neg.size()){
    arr[k++] = pos[i++];
    arr[k++] = neg[j++];
  }
  while(i < pos.size()){
    arr[k++] = pos[i++];
  }
  while(j < neg.size()){
    arr[k++] = neg[j++];
  }
  for(int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
    }
}

// (diff question but same approach) arrange max first min second alternatively
void rearrange3(vector<int> arr, int n){
  vector <int> temp(n,0);
  int sm=0, lg=1;
  for(int i=0; i<n; i++){
    if(i%2 == 0){
      temp[i] = arr[n-lg];
      lg++;
    }else{
      temp[i] = arr[sm];
      sm++;
    }
  }
  for(int i = 0; i < n; i++){
    cout<<temp[i]<<" ";
  }
}

int main(){
  vector <int> arr = {12, 11, -13, -5, 6, -7, 5, -3};
  int n = arr.size();
  rearrange(arr, n);
  cout<<endl;

  vector <int> arr1 = {12, 11,  -5, 6, -7, 5};
  int n1 = arr1.size();
  rearrange2(arr1, n1);
  cout<<endl;

  vector <int> arr2 = {1, 4, 5,8, 2, 3};
  int n2 = arr2.size();
  rearrange3(arr2, n2);

}
