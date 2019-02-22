#include <iostream>
using namespace std;
class complex
{
  int real,img;
public:
  void read();
  void add(complex,complex);
  void subtract(complex,complex);
  void multiplication(complex,complex);
  //void divide(complex,complex);
  void display(complex,complex,complex);
};

int main()
{
  complex num1,num2,num_add,num_subtract,num_multiply,num_divide;
  num1.read();
  num2.read();
  num_add.add(num1,num2);
  num_subtract.subtract(num1,num2);
  num_multiply.multiplication(num1,num2);
  num1.display(num_add,num_subtract,num_multiply);
  return 0;
}

void complex::read()
{
  cout<<"Enter the real part :"<<endl;
  cin>>real;
  cout<<"Enter the imaginary part :"<<endl;
  cin>>img;
}

void complex::add(complex n1,complex n2)
{
  real=n1.real+n2.real;
  img=n1.img+n2.img;
}

void complex::subtract(complex n1,complex n2)
{
  real=n1.real-n2.real;
  img=n1.img-n2.img;
}

void complex::multiplication(complex n1,complex n2)
{
  int k;
  real=n1.real*n2.real;
  img=(n1.real*n2.img)+(n1.img*n2.real);
  k=(n1.img*n2.img)*-1;
  real=real+k;
}

void complex::display(complex num_add,complex num_subtract,complex num_multiply)
{
  cout<<"Addition of numbers :"<<endl;
  cout<<num_add.real<<" + "<<num_add.img<<"i"<<endl;
  cout<<"Subtraction of numbers :"<<endl;
  cout<<num_subtract.real<<" + "<<num_subtract.img<<"i"<<endl;
  cout<<"multiplication of numbers :"<<endl;
  cout<<num_multiply.real<<" + "<<num_multiply.img<<"i"<<endl;
}
