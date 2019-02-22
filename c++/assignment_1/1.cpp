#include <iostream>
using namespace std;
class coordinate
{
  int x,y;
public:
  void read();
  void calc(coordinate,coordinate);
  void show(coordinate,coordinate);
};

int main()
{
  coordinate first,second,resultant;
  first.read();
  second.read();
  resultant.calc(first,second);
  resultant.show(first,second);
  return 0;
}

void coordinate::read()
{
  cout<<"Enter the coordinate of X-axis :"<<endl;
  cin>>x;
  cout<<"Enter the coordinate of Y-axis :"<<endl;
  cin>>y;
}

void coordinate::calc(coordinate f,coordinate s)
{
  x=f.x+s.x;
  y=f.y+s.y;
}

void coordinate::show(coordinate f,coordinate s)
{
  cout<<"first coordinates are :"<<endl;
  cout<<"x = "<<f.x<<" & y = "<<f.y<<endl;
  cout<<"second coordinates are :"<<endl;
  cout<<"x = "<<s.x<<" & y = "<<s.y<<endl;
  cout<<"resultant is :"<<endl;
  cout<<"x = "<<x<<" & y = "<<y<<endl;
}
