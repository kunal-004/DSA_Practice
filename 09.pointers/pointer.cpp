#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;
    cout << "Address of a: " << &a << endl;
    cout << "Value of a: " << a << endl;
    cout << "Address of p: " << &p << endl;
    cout << "Address of p: " << p << endl;
    cout << "Value of *p: " << *p << endl;
    cout << "-----------------------------------------" << endl;
  *p = 391;
  cout << "Value of a: " << a << endl;
  cout << "Address  of p: " << p << endl;
  cout << "Value of *p: " << *p << endl;


  vector<int> v = {1, 2, 3, 4, 5};

  vector<int> *p1 = &v;

  cout << "(*p1)[0]: " << (*p1).at(3 ) << endl;



cout << "-----------------------------------------" << endl;

// size_t size{0};
// double *temp = nullptr;

// cout << "Enter the size of the array: ";
// cin >> size;

// temp = new double[size];
// cout << temp << endl;

// delete [] temp;

int scores[] = {100, 95, 89, 68, -1};

int *score_ptr = scores;

cout << "Value of scores: " << *score_ptr << endl;
  

    return 0;
}
