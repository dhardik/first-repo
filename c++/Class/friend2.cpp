//20:07:2018
//friends function(case -2)
#include <iostream>
using namespace std;
class num2;//here num2 is foreward declared to avoid compilation error.
class num1
{
  int x;
public:
  void read();
  friend void product(num1,num2);
}obj1;

class num2
{
  int y;
public:
  void read();
  friend void product(num1,num2);
}obj2;

int main()
{
  obj1.read();
  obj2.read();
  product(obj1,obj2);
}

void num1::read()
{
  cin>>x;
}

void num2::read()
{
  cin>>y;
}

void product(num1 n1,num2 n2)
{
  int r;
  r=n1.x*n2.y;
  cout<<endl<<"r =  "<<r<<endl;
}
