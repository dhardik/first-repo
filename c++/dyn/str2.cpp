#include <iostream>
using namespace std;
class demo_str
{
  int size;
  char *ch;
public:
  demo_str(string str);
  void display();
};

int main()
{
  string str;
  getline(cin,str);
  demo_str s1(str);
  s1.display();
  return 0;
}

demo_str::demo_str(string str)
{
  int n,i;
  n=str.length();
  size=n;
  ch=new char[size];
  for(i=0;i<size;i++)
  {
    ch[i]=str[i];
  }
}

void demo_str::display()
{
  int i;
  for(i=0;i<size;i++)
  {
    cout<<ch[i];
  }
}
