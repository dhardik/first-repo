#include <iostream>
using namespace std;

class base
{
public:
  base()
  {
    cout<<"Base con"<<endl;
  }
  virtual ~base()
  {
    cout<<"Base des"<<endl;
  }
};

class der:public base
{
public:
  der()
  {
    cout<<"der con"<<endl;
  }
  ~der()
  {
    cout<<"der des"<<endl;
  }
};

int main()
{
  base *bptr;
  bptr=new der;
  delete bptr;
  return 0;
}
