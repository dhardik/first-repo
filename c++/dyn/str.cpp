#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class str
{
  int size;
  char *ptr;
public:
  void read();
  void show();
  str(int n)
  {
    size=n;
    ptr=new char[size];
  }
};

int main()
{
  int n;
  cin>>n;
  str s(n);
  s.read();
  s.show();
  return 0;
}

void str::read()
{
  int i;
  for(i=0;i<size;i++)
  {
    ptr[i]=getchar();
  }
}

void str::show()
{
  int i;
  for(i=0;i<size;i++)
  {
    cout<<ptr[i];
  }
}
