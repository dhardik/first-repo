#include <iostream>
using namespace std;
class add
{
  int a,b,c;
public:
  void read();
  void calc();
  void disp();
}p1;

int main()
{
  p1.read();
  p1.calc();
  p1.disp();
  return 0;
}

void add::read()
{
  cin>>a>>b;
}

void add::calc()
{
  c=a+b;
}

void add::disp()
{
  cout<<"sum = "<<c;
}
