//19:07:2018
//function overloading.
#include <iostream>
#include <iomanip>
using namespace std;

void area(int , int);
void area(int);
void area(float ,int ,int);

int main()
{
  int length,breadth,side,height,base;
  cout<<"Select from the following :"<<endl;
  int choice;
  cout<<"1 . Area of Rectangle :"<<endl<<"2 . Area of square :"<<endl<<"3 . Area of triangle"<<endl;
  cin>>choice;
  if(choice==1)
  {
    cout<<"Enter length of rectangle :"<<endl;
    cin>>length;
    cout<<"Enter breadth of rectangle :"<<endl;
    cin>>breadth;
    area(length,breadth);
  }
  else if(choice==2)
  {
    cout<<"Enter side of square :"<<endl;
    cin>>side;
    area(side);
  }
  else if(choice==3)
  {
    cout<<"Enter height of triangle :"<<endl;
    cin>>height;
    cout<<"Enter base of triangle :"<<endl;
    cin>>base;
    area(0.5,height,base);
  }
}

void area(int length,int breadth)
{
  int area;
  area=length*breadth;
  cout<<"Area of Reactangle is "<<area<<endl;
}

void area(int side)
{
  int area;
  area=side*side;
  cout<<"Area of square is "<<area<<endl;
}

void area(float p,int height,int base)
{
  int area;
  area=p*height*base;
  cout<<"Area of triangle is "<<area<<endl;
}
