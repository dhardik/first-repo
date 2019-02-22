//12:07:2018
//WAP to display factorial of entered number.
#include <iostream>
using namespace std;
int main()
{
  int i,f=1,n;
  cout<<"Enter the number :"<<endl;
  cin>>n;
  for(i=1;i<=n;i++)
  {
    f=f*i;
  }
  cout<<"Factorial of "<<n<<" is "<<f<<endl;
  return 0;
}
