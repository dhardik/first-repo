//23:07:2018
//static object
#include <iostream>
using namespace std;
class stud
{
  int roll;
  string name;
  int year;
public:
  void read();
  void show();
};

int main()
{
  static stud obj;
  obj.show();
  obj.read();
  obj.show();
  return 0;
}

void stud::read()
{
  cin>>roll;
  cin>>name;
  cin>>year;
}

void stud::show()
{
  cout<<"roll = "<<roll<<endl<<"name = "<<name<<endl<<"year = "<<year<<endl;
}
