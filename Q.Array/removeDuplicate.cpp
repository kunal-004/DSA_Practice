#include<bits/stdc++.h>
using namespace std;


//brtue approach
int rmDups1(vector <int> &v, int n){
  set <int> s;
  for(int i=0; i<n; i++){
    s.insert(v[i]);
  }
  v.clear();
  for(auto i=s.begin(); i!=s.end(); i++){
    v.push_back(*i);
  }
  return v.size();
}

//Optimal approach
int rmDups2(vector <int> &v, int n){
  int i=0;
   while(i<n-1){
    if(v[i] == v[i+1]){
      v.erase(v.begin()+i);
      n--;
    }
    else{
      i++;
    }
   }
  return v.size();
}

int rmDups3(vector <int> &v, int n){
  int i=0;
  for(int j=1; j<n; j++){
    if(v[i] != v[j]){
     v[++i] = v[j];
    }
  }
  return i+1;
}

int main(){
  vector <int> v = {1,1,2,2,2,3,3};
  int n = v.size();

  int res = rmDups2(v, n);
  for(int i=0; i<res; i++){
    cout<<v[i]<<" ";
  }
  cout << "Size of the array after removing duplicates: "<<res<<endl;

  int res1 = rmDups1(v, n);
  for(int i=0; i<res1; i++){
    cout<<v[i]<<" ";
  }
  cout << "Size of the array after removing duplicates: "<<res1<<endl;

  int res2 = rmDups3(v, n);
  for(int i=0; i<res2; i++){
    cout<<v[i]<<" ";
  }
  cout << "Size of the array after removing duplicates: "<<res2<<endl;

  return 0;
}
