//17:07:2018
//WAP for addition of two complex numbers(method 1)
#include <iostream>
using namespace std;
class complex
{
  int real,img;
public:
  void read();
  void add(complex);
  void display();
};

int main()
{
  complex c1,c2;
  c1.read();
  c2.read();
  c1.add(c2);
  c1.display();
  return 0;
}

void complex::read()
{
  cin>>real>>img;
}

void complex::add(complex c2)
{
  real=real+c2.real;
  img=img+c2.img;
}

void complex::display()
{
  cout<<endl<<"res= "<<real<<" "<<img<<endl;
}
