#include<bits/stdc++.h>
using namespace std;

//better approach
void nextPermutation(vector<int> arr) {
   next_permutation(arr.begin(), arr.end());
    for(int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
        cout << endl;
}

//optimal approach
void nextPermutation2(vector<int> arr){
  int n = arr.size();
  int i = n-2;
  while(i >= 0 && arr[i] >= arr[i+1]) i--;
  if(i >= 0){
    int j = n-1;
    while(j >= 0 && arr[j] <= arr[i]) j--;
    swap(arr[i], arr[j]);
  }
  reverse(arr.begin()+i+1, arr.end());
  for(int i = 0; i < arr.size(); i++)
    cout << arr[i] << " ";
}

int main(){
   vector<int> arr = {1, 2, 3, 4 ,5};
   nextPermutation(arr);
   nextPermutation2(arr);
}
