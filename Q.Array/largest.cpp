#include<bits/stdc++.h>
using namespace std;

void largest(vector<int> &arr){
  int lrg= arr[0],n=arr.size();
  for(auto i: arr){
    if(i>lrg){
      lrg=i;
    }
  }
  cout<<lrg;
}

int main(){
  vector<int> arr = {1, 2, 37, 4, 5};
  largest(arr);
}
