#include <iostream>
using namespace std;

int main(){
  int arr[5]= {1,2,3,4,5};
  int n = sizeof(arr)/sizeof(arr[0]);


  int maxSum = INT32_MIN;
  for(int start=0; start<n; start++){

    for(int end=start; end<n; end++){
      int sum = 0;
      for(int i=start; i<=end; i++){
        sum += arr[i];
        maxSum = max(maxSum, sum);
      }
    }
  }
  cout<<maxSum;
}
