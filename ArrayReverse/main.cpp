#include<iostream>
#include<vector>

using namespace std;

void reverse_array(vector<int> &v){
  int start = 0, end = v.size() - 1;
  while (start <= end)
  {
    swap(v[start], v[end]);
    start++;
    end--;
  }
  
}


int main(){
  vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  for(int i = 0; i < v.size(); i++){
    cout << v[i] << " ";
  }

  reverse_array(v);

  cout << "Reversed array: \n"; 

  for(int i = 0; i < v.size(); i++){
    cout << v[i] << " ";
  }

  return 0;
}
