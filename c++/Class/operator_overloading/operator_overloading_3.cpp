//from returning object in a overloaded operator.
#include <iostream>
using namespace std;
int main();
class number
{
  int x,y,z;
public:
  number(int a=0,int b=0,int c=0)
  {
    x=a;
    y=b;
    z=c;
  }
  number operator-()
  {
    number num;
    num.x=-x;
    num.y=-y;
    num.z=-z;
    return num;
  }
  void display()
  {
    cout<<x<<" "<<y<<" "<<z<<" "<<endl;
  }
};

int main()
{
  number n1(5,6,7),n2;
  n2=-n1;
  n2.display();
  return 0;
}
