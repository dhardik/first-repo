#include <iostream>
#include <string>
using namespace std;

class stud
{
  int roll;
  string name;
public:
  void read();
  void show();
};

class result:public stud
{
  int marks[4];
  double per;
public:
  void read();
  void cal_r();
  void show_r();
};

int main()
{
  result r1;
  r1.stud::read();
  r1.read();
  r1.cal_r();
  r1.show_r();
  r1.show();
  return 0;
}

void stud::read()
{
  cin>>roll;
  cin>>name;
}

void stud::show()
{
  cout<<roll<<endl;
  cout<<name<<endl;
}

void result::read()
{
  int i;
  for(i=0;i<4;i++)
  { 
    cin>>marks[i];
  }
}

void result::cal_r()
{
  int sum=0,i;
  for(i=0;i<4;i++)
  {
    sum=sum+marks[i];
  }
  per=(double)sum/4;
}

void result::show_r()
{
  int i;
  for(i=0;i<4;i++)
  {
    cout<<marks[i]<<endl;
  }
  cout<<per<<endl;
}
