//12:07:2018
//WAP to print table of entered number.
#include <iostream>
using namespace std;
int main()
{
  int i,n,p;
  cout<<"Enter the number"<<endl;
  cin>>n;
  cout<<"Table of "<<n<<" :"<<endl;
  for(i=1;i<=20;i++)
  {
    p=i*n;
    cout<<n<<" X "<<i<<" = "<<p<<endl;
  }
  return 0;
}
