#include <iostream>
using namespace std;
class demo
{
  int size,*ptr;
public:
  demo(int n)
  {
    size=n;
    ptr=new int[size];
  }
  void read();
  void display();
};

int main()
{
  int n;
  cin>>n;
  demo d1(n);
  d1.read();
  d1.display();
  return 0;
}

void demo::read()
{
  int i;
  for(i=0;i<size;i++)
  {
    cin>>ptr[i];
  }
}

void demo::display()
{
  int i;
  for(i=0;i<size;i++)
  {
    cout<<ptr[i]<<endl;
  }
}
