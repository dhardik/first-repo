//23:07:2018
// static data member and static member functions
#include <iostream>
using namespace std;
class demo
{
  int roll;
  static int total_seats_left; //static data member
public:
  void read();
  static void modify(); //static member function
};

int demo::total_seats_left=10;//assigning value to static data member

int main()
{
  int i;
  demo obj[10];
  for(i=0;i<10;i++)
  {
    obj[i].read();
    demo::modify();//calling of static member function
  }
}

void demo::read()
{
  cin>>roll;
}

void demo::modify()
{
  total_seats_left--;
  cout<<"total = "<<total_seats_left<<endl;
}
