//20:07:2018
//friend function (case -1)
#include <iostream>
using namespace std;
class demo
{
  int x,y;
public:
  void read();
  friend void add(demo);//this is friend function
};

int main()
{
  demo d1;
  d1.read();
  add(d1);
}

void add(demo k)
{
  int r;
  r=k.x+k.y;
  cout<<"Add = "<<r<<endl;
}

void demo::read()
{
  cin>>x>>y;
}
