#include<iostream>
using namespace std;

int main(){
  int n;
  cout << "Enter the number of elements: ";
  cin >> n;
  int arr[n];
  for(int i=0; i<n; i++){
    cout << "Enter element " << i+1 << ": ";
     cin>> arr[i];
  }

  //precompute
  int hash[13]= {0};
  for(int i=0; i<n; i++){
    hash[arr[i]] += 1;
  }

  int q;
  cout << "Enter the number of queries: ";
  cin >> q;
  while(--q){
    int number;
    cout << "Enter the number to be searched: ";
    cin >> number;


    cout << "--------------------------------------" << endl;

    //fetch
    cout << "The number " << number << " is present " << hash[number] << " times." << endl;
  }
}
