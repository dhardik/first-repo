#include <iostream>
#include <cmath>
using namespace std;
class compound
{
  float p,r,t,ci;
public:
  void read();
  void calc();
  void display();
};

int main()
{
  int n;
  cin>>n;
  compound obj[n];
  int i;
  for(i=0;i<n;i++)
  {
    obj[i].read();
  }
  for(i=0;i<n;i++)
  {
    obj[i].calc();
  }
  for(i=0;i<n;i++)
  {
    obj[i].display();
  }
  return 0;
}

void compound::read()
{
  cin>>p>>r>>t;
  r=r/100;
}

void compound::display()
{
  cout<<ci;
}

void compound::calc()
{
  float res;
  int i;
  for(i=1;i<=t;i++)
  {
    res=p*(pow((1+r),t));
  }
  ci=res;
}
