#include<bits/stdc++.h>
using namespace std;  


void rotateK(vector <int> &arr, int k, int n){
  k = k % n;
  // reverse(arr.begin()+ (n-k), arr.end()); // reverse the k elements from n-k to n
  reverse(arr.begin(), arr.begin()+ (n-k)); // reverse the n-k elements from 0 to n-k
  reverse(arr.begin(), arr.end()); // reverse the whole array
}

// when we have to rotate the array by r elements in forward or backward direction
void rotateArrayTwo(int n, char d, int r, vector < int > & num) {
     r = r%n;
    if(r==0) return;

    if(d=='f'){
        reverse(num.begin()+(n-r), num.end());
        reverse(num.begin(), num.begin()+(n-r));
        reverse(num.begin(), num.end());
    }
    if(d=='b'){
        reverse(num.begin(), num.begin()+r);
        reverse(num.begin()+r, num.end());
        reverse(num.begin(), num.end());
    }
}

int main(){
  vector <int> arr = {1,2,3,4,5,6,7};
  int k = 3;
  int n = arr.size();
  rotateK(arr, k, n);

  cout << "Array after rotation: ";
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  return 0;
}
