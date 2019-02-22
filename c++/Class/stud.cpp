//13:07:2018
/*WAP to read marks of a student of 3 subjects and display
it's precentage*/
#include <iostream>
using namespace std;
class student
{
  float sub1,sub2,sub3,percent;
public:
  void read();
  void percentage();
  void display();
};

int main()
{
  student obj;
  obj.read();
  obj.percentage();
  obj.display();
  return 0;
}

void student::read()
{
  cout<<"Enter the marks of first subject:"<<endl;
  cin>>sub1;
  cout<<"Enter the marks of second subject:"<<endl;
  cin>>sub2;
  cout<<"Enter the marks of third subject:"<<endl;
  cin>>sub3;
}

void student::percentage()
{
  percent=(sub1+sub2+sub3)/3;
}

void student::display()
{
  cout<<"The precentage of the student is "<<percent<<endl;
}
