#include<bits/stdc++.h>
using namespace std;



// brute force approach
vector<int> unionArray(vector<int> a, vector<int> b){
   set <int> s;
   vector<int> result;
   for(int i = 0; i < a.size(); i++){
     s.insert(a[i]);
   }
   for(int i = 0; i < b.size(); i++){
     s.insert(b[i]);
   }
   for(auto i: s){
      result.push_back(i);
   }
   return result;
}

// optimized approach
vector<int> unionArray2(vector<int> a, vector<int> b) {
    int n = a.size();  
    int m = b.size();  
    int i = 0, j = 0;  
    vector<int> result;  

    while (i < n && j < m) {
        if (a[i] < b[j]) {
            if (result.empty() || result.back() != a[i]) {
                result.push_back(a[i]);
            }
            i++;
        } 
        else if (b[j] < a[i]) {
            if (result.empty() || result.back() != b[j]) {
                result.push_back(b[j]);
            }
            j++;  
        } 
        else {
            if (result.empty() || result.back() != a[i]) {
                result.push_back(a[i]);
            }
            i++;  
            j++;
        }
    }

    while (i < n) {
        if (result.empty() || result.back() != a[i]) {
            result.push_back(a[i]);
        }
        i++;
    }

    while (j < m) {
        if (result.empty() || result.back() != b[j]) {
            result.push_back(b[j]);
        }
        j++;
    }

    return result;
}


int main(){
  vector<int> a = {1, 2, 3, 4, 5};
  vector<int> b = {4, 5, 3, 1, 2};
  vector<int> result = unionArray(a, b);
  cout << "Union of two arrays is: ";
  for(int i = 0; i < result.size(); i++){
    cout << result[i] << " ";
    }
  cout << endl;
  
  vector<int> result2 = unionArray2(a, b);
  cout << "Union of two arrays is: ";
  for(int i = 0; i < result2.size(); i++){
    cout << result2[i] << " ";
    }
}
