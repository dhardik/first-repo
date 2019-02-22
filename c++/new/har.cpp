#include <iostream>
using namespace std;

class student
{
  int sub[3],total;
public:
  void read();
  void calc();
  void disp();
}obj[3];

int arr[3],k=0,max=0;

int main()
{
  int i;
  for(i=0;i<3;i++)
  {
    cout<<"Enter the marks"<<endl;
    obj[i].read();
    obj[i].calc();
  }
  for(i=0;i<3;i++)
  {
    cout<<endl<<"Results :"<<endl;
    obj[i].disp();
  }
  for(i=0;i<3;i++)
  {
    if(max>arr[i])
    {
      max=arr[i];
    }
  }
  return 0;
}

void student::read()
{
  int i;
  for(i=0;i<3;i++)
  {
    cin<<sub[i];
  }
}

void student::calc()
{
  int i;
  total=0;
  for(i=0;i<3;i++)
  {
    total=total+sub[i];
  }
  arr[k]=total;
  k++;
}

void student::display()
{
  cout<<"Result :"<<endl;
  cout<<total<<endl;
}
