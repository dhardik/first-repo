#include <iostream>
using namespace std;

int main()
{
  int *ptr;
  int arr[5]={1,2,3,4,5};
  ptr=arr;
  for(int i=0;i<5;i++)
  {
    cout<<*(ptr+i)<<endl;
  }
  cout<<"*****\n";
  for(int i=0;i<5;i++)
  {
    cout<<ptr[i]<<endl;
  }
  cout<<"*****\n";
  for(int i=0;i<5;i++)
  {
    cout<<i[ptr]<<endl;
  }
  return 0;
}
