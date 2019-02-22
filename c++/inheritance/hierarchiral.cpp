#include <iostream>
#include <string>
using namespace std;

class persn
{
  string name;
  int phone;
public:
  void read();
  void show();
};

class student:public persn
{
  int roll,marks[4];
  string course;
public:
  void read();
  void show();
};

class teacher:public persn
{
  int emp_id;
  string qual,sub;
public:
  void read();
  void show();
};

int main()
{
  student stud;
  teacher tch;
  stud.persn::read();
  stud.read();
  tch.persn::read();
  tch.read();
  cout<<"Students :"<<endl;
  stud.persn::show();
  stud.show();
  cout<<"Teacher :"<<endl;
  tch.persn::show();
  tch.show();
  return 0;
}

void persn::read()
{
  cout<<"Enter name :"<<endl;
  cin>>name;
  cout<<"Enter phone no. :"<<endl;
  cin>>phone;
}

void persn::show()
{
  cout<<"name : "<<name<<endl;
  cout<<"phone no. : "<<phone<<endl;
}

void student::read()
{
  cout<<"enter roll :"<<endl;
  cin>>roll;
  cout<<"enter marks of 4 sub :"<<endl;
  int i;
  for(i=0;i<4;i++)
  {
    cin>>marks[i];
  }
  cout<<"enter branch :"<<endl;
  cin>>course;
}

void student::show()
{
  cout<<"roll no :"<<roll<<endl;
  int i;
  cout<<"marks :"<<endl;
  for(i=0;i<4;i++)
  {
    cout<<"marks "<<(i+1)<<" : "<<marks[i]<<endl;
  }
  cout<<"stream : "<<course<<endl;
}

void teacher::read()
{
  cout<<"enter emp id :"<<endl;
  cin>>emp_id;
  cout<<"enter qualification :"<<endl;
  cin>>qual;
  cout<<"enter subject :"<<endl;
  cin>>sub;
}

void teacher::show()
{
  cout<<"emp id  : "<<emp_id<<endl;
  cout<<"qualification : "<<qual<<endl;
  cout<<"subject : "<<sub<<endl;
}
