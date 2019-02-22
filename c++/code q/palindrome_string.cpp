#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
  string str;
  int i,count=0,n;
  getline(cin,str);
  n=str.length();
  for(i=0;i<n;i++)
  {
    if(str[i]==' ')
    {
      count++;
    }
  }
  int k=0,arr[count];
  for(i=0;i<n;i++)
  {
    if(str[i]==' ')
    {
      arr[k]=i;
      k++;
    }
  }
  for(i=0;i<k;i++)
  {
    cout<<arr[i]<<endl;
  }
  //cout<<count<<endl;
  return 0;
}
