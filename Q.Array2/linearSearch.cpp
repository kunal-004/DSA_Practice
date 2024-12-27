#include <iostream>
#include <vector>
using namespace std;


int linearSearch(vector<int> arr, int n, int key) {
  for(int i = 0; i < n; i++) {
    if(arr[i] == key) {
      return i;
    }
  }
  return -1;
}

int main() {
vector<int> arr = {0,1,0,3,12};
int n = arr.size();
int key = 3;
cout << linearSearch(arr, n, key) << endl;

}
