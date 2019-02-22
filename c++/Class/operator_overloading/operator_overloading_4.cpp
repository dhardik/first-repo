//prefix overloaded
#include <iostream>
using namespace std;
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
  void operator++()
  {
    ++x;
    ++y;
    ++z;
  }
  void display()
  {
    cout<<x<<" "<<y<<" "<<z<<" "<<endl;
  }
};

int main()
{
  number n1(5,6,7);
  ++n1;
  n1.display();
  return 0;
}
