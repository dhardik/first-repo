//19:07:2018
#include <iostream>
using namespace std;

void volume(int l=10,int b=20,int=30);

int main()
{
  volume();
  volume(7);
  volume(5,30);
  volume(15,17,18);
  return 0;
}

void volume(int a,int b,int c)
{
  cout<<a<<" "<<"*"<<" "<<b<<" "<<"*"<<" "<<c<<endl;
  cout<<"Product = "<<a*b*c<<endl<<endl;
}
