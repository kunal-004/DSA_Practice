#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool armstrong(int n)
{
    int sum=0;
    int org = n;
    while(n>0){
        int rem= n%10;
        sum = sum + pow(rem,3);
        n= n/10;
    }
    return org==sum;
}

int main(){
    int n;
    cin>>n;

    if(armstrong(n)){
        cout<<"armstrong";
    }
    else{
        cout<<"Not armstrong";
    }
    return 0;
}
