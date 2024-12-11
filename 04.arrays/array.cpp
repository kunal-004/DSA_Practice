#include<iostream>
#include<vector>
using namespace std;

int main(){
char arry[] {'a', 'b', 'c', 'd', 'e'};


  cout << arry[0] << endl;
  cout << arry[4] << endl;

  // cin >>arry[5];

  int arrt[] {0};
  cout << arrt[0] << endl;
  cout << arrt[4] << endl;

  cout << arrt << endl;

vector<int> vec1 , vec2;
vec1.push_back(10);
vec1.push_back(20);

cout << vec1.at(0) << endl;
cout << vec1.at(1) << endl;

cout << "-------------------------------------------" << endl;

vec2.push_back(100);
vec2.push_back(200);

cout << vec2.at(0) << endl;
cout << vec2.at(1) << endl;

vector<vector<int>> vec_2d;

vec_2d.push_back(vec1);
vec_2d.push_back(vec2);

cout << "-------------------------------------------" << endl;
cout << vec_2d.at(0).at(0) << endl;
cout << vec_2d.at(0).at(1) << endl;
cout << vec_2d.at(1).at(0) << endl;
cout << vec_2d.at(1).at(1) << endl;


vec1.at(0) = 1000;

cout << "-------------------------------------------" << endl;
cout << vec_2d.at(0).at(0) << endl;
cout << vec_2d.at(0).at(1) << endl;
cout << vec_2d.at(1).at(0) << endl;
cout << vec_2d.at(1).at(1) << endl;


cout << "-------------------------------------------" << endl;
cout << vec1.at(0) << endl;
cout << vec1.at(1) << endl;

  return 0;
}
