#include<bits/stdc++.h>
using namespace std;

int allocateB(vector<int> $books, int n , int m){
  if(n<m) return -1;
  int low = *max_element($books.begin(), $books.end());
  int high = accumulate($books.begin(), $books.end(), 0);
  while(low<=high){
    int mid = (low+high)/2;
    int students = 1;
    long long pageStudent = 0;
    for(int i=0;i<n;i++){
      if(pageStudent+$books[i]>mid){
        pageStudent = $books[i];
        students++;
      }
      else{
        pageStudent += $books[i];
      }
    }
    if(students>m){
      low = mid+1;
    }
    else{
      high = mid-1;
    }
  }
  return low;
}

int main(){
  vector<int> books = {12, 34, 67, 90};
  int n = books.size();
  int m = 2;
  cout << allocateB(books, n, m) << endl;

  return 0;
}
