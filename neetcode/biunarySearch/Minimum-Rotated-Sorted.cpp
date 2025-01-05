#include<bits/stdc++.h>
using namespace std;

//second case (   duplicate elements)
void findmin(vector<int> &arr1, int n){
  int low = 0, high = n-1;
  int miny = INT_MAX;
  while (low<=high)
  {
    int mid= low+(high-low)/2;
    if(arr1[low]<=arr1[mid]){
      miny = min(miny,arr1[low]);
      low = mid+1;
    }else{
      miny = min(miny,arr1[mid]);
      high = mid-1;
    }
  }
  cout<<"Minimum element is: "<<miny<<endl;
}

int main(){
  vector <int> arr = {5,6,7,1,2,3,4};
  int n = arr.size();
  findmin(arr,n);
  
}
