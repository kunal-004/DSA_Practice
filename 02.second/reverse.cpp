#include <iostream>
using namespace std;


void search(int arr[], int size, int start, int end){
  while (start <= end){
     swap(arr[start], arr[end]);
      start++;
      end--;
  }
  return;
}

int main() {
  int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
  int size = sizeof(arr) / sizeof(int);
  int start = 0, end = size - 1;
  
  search(arr, size, start, end);
  for(int i = 0; i < size; i++){
    cout << arr[i] << " ";
  }
  return 0;
}
