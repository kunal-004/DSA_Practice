#include <iostream>
#include <vector>
using namespace std;

// brute force approach
void moveZeroes(vector<int>& arr, int n) {
  vector<int> temp;

  for(int i=0; i<n; i++){
    if(arr[i] !=0){
      temp.push_back(arr[i]);
    }
  }
  for(int i=0; i<temp.size(); i++){
    arr [i] = temp[i];
  }
  for(int i=temp.size(); i<n; i++){
    arr[i] = 0; 
  }
}

// optimal approach
void moveZeros2(vector<int>& arr, int n){
  int j=0;
  for(int i=0; i<n; i++){
    if(arr[i] != 0){
      swap(arr[i], arr[j]);
      j++;
    }
  }
}

int main() {
vector<int> arr = {0,1,0,3,12};
int n = arr.size();
moveZeroes(arr, n);

cout << "Array after moving zeroes: ";
for(int i=0; i<n; i++){
  cout << arr[i] << " ";
  }

moveZeros2(arr, n);
cout << "Array after moving zeroes: ";
for(int i=0; i<n; i++){
  cout << arr[i] << " ";
  }

}
