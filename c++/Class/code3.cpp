//17:07:2018
//WAP for addition of two complex numbers (method 3)
#include <iostream>
using namespace std;
class complex
{
  int real,img;
public:
  void read();
  void add(complex,complex);
  void display();
};

int main()
{
  complex c1,c2,c3;
  c1.read();
  c2.read();
  c3.add(c1,c2);
  c3.display();
  return 0;
}

void complex::read()
{
  cin>>real>>img;
}

void complex::add(complex c1,complex c2)
{
  real=c1.real+c2.real;
  img=c1.img+c2.img;
}

void complex::display()
{
  cout<<endl<<"res= "<<real<<" "<<img<<endl;
}
