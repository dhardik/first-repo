#include <iostream>
using namespace std;
class number
{
  int x,y,z;
public:
  void operator-()
  {
    x=-x;
    y=-y;
    z=-z;
  }
  number()
  {
    x=5;
    y=6;
    z=7;
  }
  void show()
  {
    cout<<n1.x<<" "<<n1.y<<" "<<n1.z;
  }
};
int main()
{
  number n1;
  -n1;
  n1.show()
  return 0;
}
