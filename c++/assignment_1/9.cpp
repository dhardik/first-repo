#include <iostream>
#include <string>
using namespace std;

class complex
{
  int real,img;
public:
  void read();
  friend complex calc(complex,complex);
  void display();
};

int main()
{
  complex c1,c2,c3;
  c1.read();
  c2.read();
  c3=calc(c1,c2);
  c3.display();
  return 0;
}

void complex::read()
{
  cout<<"Enter the real and imaginary part :"<<endl;
  cin>>real>>img;
}

void complex::display()
{
  cout<<real<<"+"<<img<<"i"<<endl;
}

complex calc(complex c1,complex c2)
{
  complex temp;
  temp.real=c1.real+c2.real;
  temp.img=c1.img+c2.img;
  return temp;
}
