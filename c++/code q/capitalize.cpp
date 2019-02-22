#include <string>
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
  string str;
  getline(cin,str);
  int i,n;
  n=str.length();
  int count=0;
  str[0]-=32;
  for(i=0;i<n;i++)
  {
    if(str[i]==' ')
    {
      str[i+1]-=32;
    }
  }
  cout<<endl<<"str = "<<str<<endl;
  return 0;
}
