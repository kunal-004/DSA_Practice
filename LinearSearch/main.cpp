#include<iostream>
#include<vector>

using namespace std;

int linear_search(vector<int> v, int n){
  for(int i = 0; i < v.size(); i++){
    if(v[i] == n){
      return i;
    }
  }
  return -1;
}


int main(){
  vector<int> v = {1, 22, 13, 4, 15, 6, 77, 8, 9};

  cout << "Enter the number you want to search: ";
  int n;
  cin >> n;

  int index = linear_search(v, n);
  cout << "Number found at index: " << index << endl;
  
  return 0;
}
