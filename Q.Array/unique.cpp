#include<iostream>

using namespace std;

int findUnique(int *arr, int size)
{
  int unique{0};
    for(int i = 0; i < size; i++){
      unique = unique ^ arr[i];
    }
    return unique;
}

int main(){
  int arr[] = {1, 2, 3, 5, 1, 2, 3};
  int n = sizeof(arr)/sizeof(arr[0]);

  cout << findUnique(arr, n) << endl;
  return 0;
}
