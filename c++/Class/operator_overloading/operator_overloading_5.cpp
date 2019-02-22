//postfix overloaded
#include <iostream>
using namespace std;
class number
{
  int x,y,z;
public:
  number()
  {
    cin>>x>>y>>z;
  }
  friend void operator-(number &n1);//call by reference
  void display()
  {
    cout<<x<<" "<<y<<" "<<z<<" "<<endl;
  }
};

int main()
{
  number num;
  -num;
  num.display();
  return 0;
}
void operator-(number &n1)// call by reference
{
  n1.x=-n1.x;
  n1.y=-n1.y;
  n1.z=-n1.z;
}
