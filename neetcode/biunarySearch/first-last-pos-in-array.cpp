#include<bits/stdc++.h>
using namespace std;

 vector<int> find(vector<int>& arr, int x) {
    vector<int> result(2, -1);

    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            result[0] = mid;
            right = mid - 1; 
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (result[0] == -1) {
        return result;
    }

    left = result[0], right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            result[1] = mid;
            left = mid + 1; 
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
    }


int main(){
  vector<int> arr = {1, 2, 55, 3, 62, 4, 5};
  int x = 3;
  vector<int> result = find(arr, x);
  cout << result[0] << " " << result[1] << endl;
  
  return 0;
}
