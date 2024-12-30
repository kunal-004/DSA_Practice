#include<bits/stdc++.h>
using namespace std;


void printaxSubarr(vector<int> &arr, int n){
   int maxsum = INT_MIN;
    int sum = 0;
    int ansStarrt = 0, ansEnd = 0, start = 0;
    for(int i = 0; i < n; i++){
      if(sum == 0){
        start = i;
      }
      sum+=arr[i];
      if(sum > maxsum){
        maxsum = sum;
        ansStarrt = start;
        ansEnd = i;
      }
      if(sum < 0){
        sum = 0;
      }
    }
    cout << "Max sum is: " << maxsum << endl;
    cout << "Max subarray is: ";
    for(int i = ansStarrt; i <= ansEnd; i++){
      cout << arr[i] << " ";
      }
    cout << endl;
    
}

// pair with max sum different from the above
int pairWithMaxSum(vector<int> &arr) {
    int n = arr.size();
    if (n < 2) return 0;
    int maxScore = 0;

    for (int i = 0; i < n - 1; i++) {
        int smallest = min(arr[i], arr[i + 1]);
        int secondSmallest = max(arr[i], arr[i + 1]);
        maxScore = max(maxScore, smallest + secondSmallest);
    }

    return maxScore;
    }

int main(){
  vector <int> arr = {1,3,5 ,-2,7, 5,0,-2};
  int n = arr.size();
  printaxSubarr(arr, n);
  cout << pairWithMaxSum(arr);
}
