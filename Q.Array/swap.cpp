#include<iostream>

using namespace std;

void swap(int arry[], int size){
  for(int i = 0; i < size-1; i+=2){
    swap(arry[i], arry[i+1]);
  }
};

int main() {
  int arry[6] = {1, 2, 3, 4, 5, 6};
  int size = sizeof(arry)/sizeof(arry[0]);

  cout << "Array before swapping: " << endl;
  for(int i = 0; i < size; i++){
    cout << arry[i] << " ";
  }
  swap(arry, size);

  cout << endl;

 cout << "Array after swapping: " << endl;
  for(int i = 0; i < size; i++){
    cout << arry[i] << " " ;
  }
}
