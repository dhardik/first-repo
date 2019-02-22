//20:07:2018
//friend function (case -3)
#include <iostream>
using namespace std;
class demo2;
class demo1
{
  int x;
public:
  void read();
  void add(demo2);
};

class demo2
{
  int x;
public:
  void read();
  friend void demo1::add(demo2);
};

int main()
{
  demo1 obj1;
  demo2 obj2;
  obj1.read();
  obj2.read();
  obj1.add(obj2);
}

void demo1::read()
{
  cin>>x;
}

void demo2::read()
{
  cin>>x;
}

void demo1::add(demo2 a)
{
  int r;
  r=x+a.x;
  cout<<"Add = "<<r<<endl;
}
