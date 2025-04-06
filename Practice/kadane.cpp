#include<bits/stdc++.h>
using namespace std;



vector<int> takeArrayInput(string n) {
  vector<int> arr;
  string temp = "";
  for (int i = 0; i < n.length(); i++) {
    if (n[i] == ',') {
      arr.push_back(stoi(temp));
      temp = "";
    } else {
      temp += n[i];
    }
  }
  arr.push_back(stoi(temp));
  return arr;
}

int main() {
  string n;
  getline(cin, n);
  vector<int> arr = takeArrayInput(n);

  int maxi = arr[0];
  int sum =0;

  for(int i=0; i<arr.size(); i++){
    sum += arr[i];
    maxi = max(maxi, sum);
    if(sum<0){
      sum = 0;
    }
  }
  cout<<maxi<<endl;
  return 0;
}
