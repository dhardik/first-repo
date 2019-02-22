#include <iostream>
using namespace std;

template <class T1,class T2>

void max(T1 a,T2 b)
{
  if(a>b)
  {
    cout<<a<<endl;
  }
  else
  {
    cout<<b<<endl;
  }
}

int main()
{
  int a;
  float b;
  cin>>a;
  cin>>b;
  max(a,b);
  return 0;
}
