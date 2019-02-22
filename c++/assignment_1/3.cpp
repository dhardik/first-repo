#include <iostream>
using namespace std;
class complex
{
  int real,img;
public:
  void read();
  void calc(complex,complex);
  void show();
};

int main()
{
  complex num1,num2,num3;
  num1.read();
  num2.read();
  num3.calc(num1,num2);
  num3.show();
  return 0;
}

void complex::read()
{
  cout<<"Enter the real part :"<<endl;
  cin>>real;
  cout<<"Enter the imaginary part :"<<endl;
  cin>>img;
}

void complex::calc(complex num1,complex num2)
{
  real=num1.real+num2.real;
  img=num1.img+num2.img;
}

void complex::show()
{
  cout<<"Sum is "<<real<<" + i"<<img<<endl;
}
