//25:07:2018
//constructor
#include <iostream>
using namespace std;
class rectangle
{
  int l,b;
public:
  rectangle();
  void show();
};
int main()
{
  rectangle r[3];
  int i;
  for(i=0;i<3;i++)
  {
    r[i].show();
  }
}
rectangle::rectangle()
{
  l=5;
  b=6;
}

void rectangle::show()
{
  cout<<"l = "<<l<<endl<<"b = "<<b<<endl;
}
