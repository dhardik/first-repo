// print the greater no
#include <iostream>
using namespace std;

template <class T>

T func(T a,T b)
{
  if(a>b)
  {
    return a;
  }
  else
  {
    return b;
  }
}

int main()
{
  float a,b;
  cin>>a>>b;
  cout<<func(a,b)<<endl;
  int c,d;
  cin>>c>>d;
  cout<<func(c,d)<<endl;
  return 0;
}
