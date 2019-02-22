//post friend increment
#include <iostream>
using namespace std;
class number
{
  int x,y,z;
public:
  number()
  {
    x=y=z=0;
  }
  number(int a,int b,int c)
  {
    x=a;
    y=b;
    z=c;
  }
  friend number operator++(number &num,int);
  void show()
  {
    cout<<x<<" "<<y<<" "<<z<<" "<<endl;
  }
};

int main()
{
  number n1(20,30,40);
  number n2;
  n2=n1++;
  n1.show();
  n2.show();
  return 0;
}

number operator++(number &num,int)
{
  number temp;
  temp.x=num.x;
  temp.y=num.y;
  temp.z=num.z;
  num.x+=1;
  num.y+=1;
  num.z+=1;
  return temp;
}
