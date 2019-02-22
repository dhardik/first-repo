#include <iostream>
using namespace std;
class complex
{
  int real,img;
public:
  void read();
  complex operator+(complex c2);
  complex operator-(complex c2);
  complex operator*(complex c2);
  void show();
};

int main()
{
  complex c1,c2,c3,c4,c5;
  c1.read();
  c2.read();
  c3=c1+c2;
  cout<<"Addition of complex nos :"<<endl;
  c3.show();
  c4=c1-c2;
  cout<<"Subtraction of complex nos :"<<endl;
  c4.show();
  c5=c1*c2;
  cout<<"Multiplication of complex nos :"<<endl;
  c5.show();
  return 0;
}

void complex::read()
{
  cin>>real>>img;
}

void complex::show()
{
  cout<<real<<" + "<<img<<"i"<<endl;
}

complex complex::operator+(complex c2)
{
  complex temp;
  temp.real=real+c2.real;
  temp.img=img+c2.img;
  return temp;
}

complex complex::operator-(complex c2)
{
  complex temp;
  temp.real=real-c2.real;
  temp.img=img-c2.img;
  return temp;
}

complex complex::operator*(complex c2)
{
  complex temp;
  
}
