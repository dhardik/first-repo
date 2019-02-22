#include <iostream>
using namespace std;
int main()
{
  int n,hrs,min,sec;
  cout<<"Enter thre time in sec :"<<endl;
  cin>>n;
  hrs=n/(60*60);
  min=(n%(60*60))/60;
  sec=(n%(60*60))%60;
  cout<<hrs<<"hours"<<min<<"minutes"<<sec<<"seconds"<<endl;
  return 0;
}
