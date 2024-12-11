#include<iostream>
using namespace std;

int *all_ptr(int *arr1, int *arr2, int size1, int size2){
  int pos{0};
  int *new_arr{nullptr};
  new_arr = new int[size1 * size2];
  for (int i = 0; i < size1; i++){
    for(int j = 0; j < size2; j++){
      new_arr[pos] = arr1[i] * arr2[j];
      pos++;
    }
  }
  return new_arr;
}

void display(int *arr, int size){
  for (int i = 0; i < size; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main(){
  int arr1[] = {1, 2, 3, 4, 5};
  int arr2[] = {10, 20, 30};

  int *new_arr = all_ptr(arr1, arr2, 5, 3);

  display(new_arr, 15);

  delete [] new_arr;

  return 0;

}
