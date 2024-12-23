#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//brute force approach
// void prime(int n)
// {
//     int count=0;
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             count++;
//         }
//         if(n/i != i){
//             count++;
//         }
//     }
// }

//optimized approach
bool isprime(int n)
{
  int count{0};
	for(int i=1; i<=sqrt(n); i++){
		if(n%i==0){
			if(n/i != i){
				count+=2;
			}else{
				count++;
			}
		}
	}
  return count==2;
}

int main(){
    int n;
    cin>>n;

    // prime(n);
    cout<<isprime(n);
    return 0;
}
