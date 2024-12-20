#include<iostream>
#include<vector>

using namespace std;

int binary_search(vector<int> &v, int n){
  int s = 0;
  int e = v.size() - 1;

  while (s <= e){
    int mid = (s + e) / 2;
    if(v[mid] == n){
      return mid;
    }else if(v[mid]< n){
      s = mid + 1;
    }else if(v[mid] > n){
      e = mid - 1;
    }
  }
  return -1;
}


int main(){
  vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  cout << "Enter the number you want to search: ";
  int n;
  cin >> n;

  int index = binary_search(v, n);
  cout << "Number found at index: " << index << endl;
  
  return 0;
}
