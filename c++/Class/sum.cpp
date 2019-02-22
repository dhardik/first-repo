//13:07:2018
//WAP to calculate sum of two numbers and display it's result using concept of class.
#include <iostream>
using namespace std;
class add
{
  int a,b,result;
public:
  void read();
  void calculate();
  void display();
}obj;
int main()
{
  obj.read();
  obj.calculate();
  obj.display();
  return 0;
}

void add::read()
{
  cout<<"Enter the first number :"<<endl;
  cin>>a;
  cout<<"Enter the second number :"<<endl;
  cin>>b;
}

void add::calculate()
{
  result=a+b;
}

void add::display()
{
  cout<<"Sum of "<<a<<" and "<<b<<" is "<<result<<endl;
}
