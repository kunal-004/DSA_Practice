#include<bits/stdc++.h>
using namespace std;


int cube(int n, int m){
  int sum=0;
  for(int i=n; i<=m; i++){
    sum+=i*i*i;
  }
  return sum;
}

int main() {
    int n=1, m=13;
    cout<<cube(n, m)<<endl;
    return 0;
}
