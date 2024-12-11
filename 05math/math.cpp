#include <iostream>
using namespace std;

int main() {
    cout << "Enter dollar amount to see their change: " << endl;
    int amount;
    cin >> amount;

    if (amount > 0) {

        int dollar = 0, quarter = 0, dime = 0, nickel = 0, penny = 0, remainingCents = amount;

        dollar = remainingCents / 100;
        remainingCents %= 100;

        quarter = remainingCents / 25;
        remainingCents %= 25;

        dime = remainingCents / 10;
        remainingCents %= 10;

        nickel = remainingCents / 5;
        remainingCents %= 5;

        penny = remainingCents;

        cout << "Your change is: " << endl;
        cout << "Dollar: " << dollar << endl;
        cout << "Quarter: " << quarter << endl;
        cout << "Dime: " << dime << endl;
        cout << "Nickel: " << nickel << endl;
        cout << "Penny: " << penny << endl;
    } else {
        cout << "Invalid amount" << endl;
    }

    return 0;
}
