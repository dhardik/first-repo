#include <iostream>
#include <cmath>
using namespace std;
class cube;
class cuboid
{
  float l,b,h,vol_cuboid;
public:
  void read();
  void calc();
  void show();
  friend class cube;
};

class cube
{
  float side;
public:
  void calc(cuboid);
  void show(cuboid);
};

int main()
{
  cuboid obj1;
  cube obj2;
  obj1.read();
  obj1.calc();
  obj2.calc(obj1);
  obj2.show(obj1);
  obj1.show();
  return 0;
}

void cuboid::read()
{
  cin>>l>>b>>h;
}

void cuboid::calc()
{
  vol_cuboid=l*b*h;
}

void cube::calc(cuboid c)
{
  side=pow(c.vol_cuboid,0.33);
}

void cube::show(cuboid c)
{
  cout<<"side = "<<side<<endl;
  cout<<"vol of cube = "<<c.vol_cuboid<<endl;
}

void cuboid::show()
{
  cout<<"l = "<<l<<endl<<"b = "<<b<<endl<<"h ="<<h<<endl;
  cout<<"vol of cuboid = "<<vol_cuboid<<endl;
}
