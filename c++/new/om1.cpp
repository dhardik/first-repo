//friend function
#include <iostream>
using namespace std;
class demo2;
class demo1
{
  int x,y;
public:
  demo1()
  {
    x=y=0;
  }
  friend void read(demo1,demo2);
  void add(demo2);
};

class demo2
{
  int x,y;
public:
demo2()
{
  x=y=0;
}
  friend void read(demo1,demo2);
  friend void demo1::add(demo2);
};

void read(demo1,demo2);

//main() start here
int main()
{
  demo1 obj1;
  demo2 obj2;
  obj1.read(obj1,obj2);
  obj1.add(obj2);
  return 0;
}
//main() end here

//read() start here
 void read(demo1 obj1,demo1 obj2)
{
  cin>>obj1.x>>obj1.y>>obj2.x>>obj2.y;
}
//read() end here

//demo1::add() start here
void demo1::add(demo2 obj2)
{
  int r;
  r=x+y+obj2.x+obj2.y;
  cout<<"Result = "<<r<<endl;
}
//demo1::add() end here
