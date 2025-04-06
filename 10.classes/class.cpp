#include <bits/stdc++.h>
using namespace std;

class Cylinder
{
public:
  Cylinder() : r(2), h(3)
  {
    std::cout << "Constructor called" << std::endl;
  }
  double volume()
  {
    return 3.14 * r * r * h;
  }

private:
  double r{1};
  double h{1};
};

int main()
{
  Cylinder c1;
  cout << "Volume " << c1.volume() << endl;
};
