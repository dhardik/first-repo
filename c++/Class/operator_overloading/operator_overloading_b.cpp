#include <iostream>
using namespace std;
class complex
{
  int real,img;
public:
  void read();
  complex operator+(complex c);
  void display();
};

int main()
{
  complex c1,c2,c3,c4,c5;
  c1.read();
  c2.read();
  c3.read();
  c4.read();
  c5=c1+c2+c3+c4;
  c5.display();
  return 0;
}

void complex::read()
{
  cin>>real>>img;
}

void complex::display()
{
  cout<<real<<" + "<<img<<"i"<<endl;
}

complex complex::operator+(complex c)
{
  complex temp;
  temp.real=real+c.real;
  temp.img=img+c.img;
  return temp;
}
