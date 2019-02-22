//17:07:2018
//WAP for addition of two complex numbers (method 2)
#include <iostream>
using namespace std;
class complex
{
  int real,img;
public:
  void read();
  complex add(complex);
  void display();
};

int main()
{
  complex c1,c2,c3;
  c1.read();
  c2.read();
  c3=c1.add(c2);
  c3.display();
  return 0;
}

void complex::read()
{
  cin>>real>>img;
}

complex complex::add(complex c2)
{
  complex c5;
  c5.real=real+c2.real;
  c5.img=img+c2.img;
  return c5;
}

void complex::display()
{
  cout<<endl<<"res= "<<real<<" "<<img<<endl;
}
