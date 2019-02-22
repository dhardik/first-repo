#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
  int n,i,count=0;
  cin>>n;
  for(i=1;i<=n;i++)
  {
    if(n%i==0)
    {
      count++;
    }
  }
  if(count>=3)
  {
    cout<<"1"<<endl;
  }
  else
  {
    cout<<"0"<<endl;
  }
  return 0;
}
