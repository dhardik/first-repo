//14:07:2018
/*WAP to read fine of three books and roll no and name of 10 students
and display it's total fine along with details*/
#include <iostream>
using namespace std;
class library
{
  int fine[3],roll,total;
  char name[10];
public:
  void read();
  void calculate();
  void display();
};

int main()
{
  library student[10];
  int i;
  for(i=0;i<10;i++)
  {
    student[i].read();
    student[i].calculate();
  }
  for(i=0;i<10;i++)
  {
    student[i].display();
  }
  return 0;
}

void library::read()
{
  int i;
  cout<<"Enter the name of student :"<<endl;
  cin>>name;
  cout<<"Enter the roll number of student :"<<endl;
  cin>>roll;
  for(i=0;i<3;i++)
  {
    cout<<"Enter the fine of subject "<<i+1<<endl;
    cin>>fine[i];
  }
}

void library::calculate()
{
  int i;
  total=0;
  for(i=0;i<3;i++)
  {
    total=total+fine[i];
  }
}

void library::display()
{
  cout<<name<<"  "<<roll<<"  "<<"  "<<total<<endl;
}
