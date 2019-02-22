#include <iostream>
#include <string>
using namespace std;

class stud
{
protected:
  int roll;
  string name;
};

class result:private stud
{
  int marks[4];
  double percent;
public:
  void read();
  void calc();
  void show();
};

int main()
{
  result r1;
  r1.stud::read();
  r1.read();
  r1.calc();
  r1.stud::show();
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
  cout<<"roll : "<<roll<<endl;
  cout<<"name : "<<name<<endl;
}

void result::read()
{
  int i;
  for(i=0;i<4;i++)
  {
    cin>>marks[i];
  }
}

void result::calc()
{
  int sum=0,i;
  for(i=0;i<4;i++)
  {
    sum=sum+marks[i];
  }
  percent=(double)sum/4;
}

void result::show()
{
  int i;
  for(i=0;i<4;i++)
  {
    cout<<"marks "<<(i+1)<<" : "<<marks[i]<<endl;
  }
  cout<<"percentage : "<<percent<<"%"<<endl;
}
