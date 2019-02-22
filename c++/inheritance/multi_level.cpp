#include <iostream>
#include <string>
using namespace std;

class person
{
  string name;
  long long int ph;
public:
  void read();
  void show();
};

class student:public person
{
  int roll;
  string branch;
public:
  void read();
  void show();
};

class result:public student
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
  r1.person::read();
  r1.student::read();
  r1.read();
  r1.calc();
  r1.person::show();
  r1.student::show();
  r1.show();
  return 0;
}

void person::read()
{
  cout<<"Enter Name : "<<endl;
  cin>>name;
  cout<<"Enter phone : "<<endl;
  cin>>ph;
}

void person::show()
{
  cout<<"Name : "<<name<<endl;
  cout<<"Phone : "<<ph<<endl;
}

void student::read()
{
  cout<<"Enter roll no : "<<endl;
  cin>>roll;
  cout<<"Enter branch : "<<endl;
  cin>>branch;
}

void student::show()
{
  cout<<"Roll : "<<roll<<endl;
  cout<<"Branch : "<<branch<<endl;
}

void result::read()
{
  int i;
  cout<<"Enter the marks of 4 subjects :"<<endl;
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
  cout<<"Marks of 4 subjects : "<<endl;
  for(i=0;i<4;i++)
  {
    cout<<marks[i]<<endl;
  }
  cout<<"percentage : ";
  cout<<percent<<"%"<<endl;
}
