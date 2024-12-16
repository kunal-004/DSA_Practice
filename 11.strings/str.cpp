#include<iostream>
#include<string>

using namespace std;


int main(){
  string s1 = "what the heck";
  const auto val = s1.substr(1, 3);
  cout << val << endl;

  if( s1.find_first_of("!") != string::npos ) {
    cout << "Found" << endl;
} else {
    cout << static_cast<signed int>(s1.find_first_of("!")) << endl;
}

int x = 60;
cout << hex << x << endl;

  return 0;
}
