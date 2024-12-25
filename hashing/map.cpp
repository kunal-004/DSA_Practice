#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;

    int a[n];
    for(int i=0; i<n; i++){
    cout << "Enter the elements " << i+1 << ":";
        cin >> a[i];
    }
    //precomputation
    map<int, int> hashM;
    for(int i=0; i<n; i++){
        hashM[a[i]]++;
    }

    for(auto it: hashM){
        cout << it.first << " ->" << it.second << endl;
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;
    while(q--){
      int num;
      cout << "Enter the element to be searched: ";
      cin >> num;

      //fetch
      cout << "The element " << num << " is present " << hashM[num] << " times." << endl;
    }

}
