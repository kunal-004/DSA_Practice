#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n)
{
    int rev=0;
    int org = n;
    while(n>0){
        int rem= n%10;
        rev = rev*10 + rem;
        n= n/10;
    }
    return org==rev;
}

int main(){
    int n;
    cin>>n;

    if(palindrome(n)){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}
