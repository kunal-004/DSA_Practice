#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<vector<int>> matrix = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };

  for(int r=0; r<matrix.size(); r++){
    for(int c=0; c<matrix[r].size(); c++){
      cout << matrix[r][c] << "\t";
    }
    cout << endl;
  }
}
