#include<bits/stdc++.h>
using namespace std;

// if array is not sorted O(m*n)
void searchMatrix(vector<vector<int>>& matrix, int target) {
  int m = matrix.size();
  int n = matrix[0].size();
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      if(matrix[i][j]==target){
        cout << "Element found at index: " << i << " " << j << endl;
        return;
      }
    }
  }
  cout << "Element not found" << endl;
}

// if array is sorted O(log(m*n))
void searchMatrix2(vector<vector<int>>& matrix, int target) {
  int m = matrix.size();
  int n = matrix[0].size();
  int low = 0, high = m*n-1;
  while(low<=high){
    int mid = low + (high-low)/2;
    int row = mid/n, col = mid%n;
    if(matrix[row][col]==target){
      cout << "Element found at index: " << row << " " << col << endl;
      return;
    }
    else if(matrix[row][col]<target){
      low = mid+1;
    }
    else{
      high = mid-1;
    }
  }
}

int main(){
  vector<vector<int>> matrix = {
    {1, 3, 5, 7},
    {10, 11, 16, 20},
    {23, 30, 34, 60}
  };

  int target = 20;
  searchMatrix(matrix, target);
  searchMatrix2(matrix, target);

  return 0;
}
