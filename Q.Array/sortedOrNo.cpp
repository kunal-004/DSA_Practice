#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector <int> &v){
  for(int i=1; i<v.size(); i++){
    if(v[i]> v[i-1]){
    }else{
      return false;
    }
  }
  return true;
}

int main(){
  vector <int> v = {1,2,3,41,5,6,7,80,9,10};
  cout <<boolalpha << isSorted(v) << endl;
}
