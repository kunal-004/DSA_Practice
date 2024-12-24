#include<iostream>  
using namespace std;

// best solution
void loopN(int n) {
    if (n == 0) return; // base case
    loopN(n - 1);
    cout << n << endl;
}

int main() {
    loopN(5);
    return 0;
}
