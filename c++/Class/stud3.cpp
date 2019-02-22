//13:07:2018
/*WAP to read marks of 10 students of 10 subjects and display
their precentages*/
#include <iostream>
using namespace std;
class student
{
  int sub[10],j,p;
public:
  void read();
  void calculate();
  void display();
}obj[10];

int main()
{
  int i;
  for(i=0;i<10;i++)
  {
    cout<<"Enter marks of student "<<i+1<<endl;
    obj[i].read();
    obj[i].calculate();
  }
  for(i=0;i<10;i++)
  {
    obj[i].display();
  }
  return 0;
}

void student::read()
{
  for(j=0;j<10;j++)
  {
    cout<<"Enter the marks for subject"<<j+1<<endl;
    cin>>sub[j];
  }
}

void student::calculate()
{
  p=0;
  for(j=0;j<10;j++)
  {
    p=p+sub[j];
  }
  p=p/(float)10;
}

void student::display()
{
  cout<<endl<<"Percentage is "<<p<<endl;
}
