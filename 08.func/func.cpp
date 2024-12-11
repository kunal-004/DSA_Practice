#include <iostream> 
using namespace std;


void calc_area(){
  cout << "Enter the radius of the circle: ";
  double radius;
  cin >> radius;
  double area = 3.14159 * radius * radius;
  cout << "The area of the circle is: " << area << endl;
}

void calc_volume_cylinder(){
  cout << "Enter the radius of the cylinder: ";
  double radius;
  cin >> radius;
  cout << "Enter the height of the cylinder: ";
  double height;
  cin >> height;
  double volume = 3.14159 * radius * radius * height;
  cout << "The volume of the cylinder is: " << volume << endl;
}


unsigned long long fact(unsigned long long  n){
  if (n == 0)
    return 1;
  else
    return n * fact(n - 1);
}

int main(){
    // calc_area();
    // calc_volume_cylinder();
    cout << fact(3) << endl;    
    return 0;
}
