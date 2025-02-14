#include<bits/stdc++.h>
using namespace std;


void rotateArr(vector<int> &arr, int n){
  int temp = arr[0];
  for(int i=1; i<n; i++){
    arr[i-1] = arr[i];
  }
  arr[n-1] = temp;
}

// Function to rotate the array clockwise
void rotate(vector<int> &arr) {
        int n = arr.size();
        int temp = arr[n-1];
        for(int i=n-1; i>0; i--){
            arr[i] = arr[i - 1];
        }
        arr[0]= temp;
    }

int main(){
  vector <int> arr = {1,2,3,4,5};
  int n = arr.size();
  rotateArr(arr, n);
  cout << "Rotated array is: ";
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
}
