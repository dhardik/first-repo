#include <iostream>
using namespace std;
class demo
{
  int x,y;
public:
  void read();
  void show();
  friend void add(demo);
};

int main()
{
  demo obj;
  obj.read();
  add(obj);
  obj.show();
  return 0;
}

void demo::read()
{
  cin>>x>>y;
}

void demo::show()
{
  cout<<"x = "<<x<<endl<<"y = "<<y<<endl;
}

void add(demo f)
{
  int r;
  r=f.x+f.y;
  cout<<"result = "<<r<<endl;
}
