#include<iostream>
#include<vector>

using namespace std;


void printPairs(vector<int> &v){
 for (auto &x : v) { // First element (like i in the original)
        for (auto &y : v) { // Second element (like j in the original)
            if (&x < &y) { // Only print pairs where x comes before y
                cout << x << " " << y << endl;
            }
        }
        cout << endl;
    }
}


int main(){
  vector<int> v = {1, 2, 3, 4, 5};

printPairs(v);

  return 0;

}
