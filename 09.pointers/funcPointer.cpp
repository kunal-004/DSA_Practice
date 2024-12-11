#include<iostream>
using namespace std;

//prototype
// void doubleVal(int *val);

// void doubleVal(int *val){
//  *val *= 2;
// }

int *create_array(size_t size, int init_val = 0){
  int *new_storage {nullptr};
  new_storage = new int[size];
  for(size_t i{0}; i < size; i++)
    *(new_storage + i) = init_val;
  return new_storage;
}

void display(const int *const array, size_t size){
  for(size_t i{0}; i < size; i++){
    cout << array[i] << " ";
  }
  cout << endl;
}


int main(){
  int *my_arr_ptr {nullptr};
  size_t size;
  int init_val{};

  cout << "Enter the size of the array: ";
  cin >> size;
  cout << "Enter the initial value of the array: ";
  cin >> init_val;

  my_arr_ptr = create_array(size, init_val);

  display(my_arr_ptr, size);

  delete [] my_arr_ptr;

  return 0;
  // int val;
  // int *int_ptr{nullptr};

  // cin >> val;
  // cout << "Value of val: " << val << endl;
  // doubleVal(&val);
  // cout << "Value of val after doubling: " << val << endl;

  // int_ptr = &val;
  // doubleVal(int_ptr);
  // cout << "Value of int_ptr after doubling: " << val << endl;
}
