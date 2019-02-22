#include <iostream>
using namespace std;
int main()
{
  int p,q,i,n=0,min;
  cin>>p>>q;
  if(p<q)
  {
    min=p;
  }
  else if(q<p)
  {
    min=q;
  }
  else
  {
    min=p;
  }
  for(i=1;i<=min;i++)
  {
    if(p%i==0 && q%i==0)
    {
      n=i;
    }
  }
  cout<<(p/n)<<"/"<<(q/n)<<endl;
  return 0;
}
