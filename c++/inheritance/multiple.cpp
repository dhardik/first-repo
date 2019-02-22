#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class int_marks
{
protected:
  int int_viva,st1[4],st2[4],st3[4];
  void read();
  void show();
};

class ext_marks
{
protected:
  int ext_viva,end_term[4];
  void read();
  void show();
};

class details
{
protected:
  string name;
  int roll;
  string branch;
  void read();
  void show();
};

class result:protected int_marks,protected ext_marks,protected details
{
  double percent;
public:
  void read();
  void calc();
  void show();
};

int main()
{
  result r1;
  r1.read();
  r1.calc();
  r1.show();
  return 0;
}

void int_marks::read()
{
  cout<<"Enter marks of internal viva : "<<endl;
  cin>>int_viva;
  cout<<"Enter marks of ST-01 : "<<endl;
  int i;
  for(i=0;i<4;i++)
  {
    cout<<"Enter marks of sub "<<(i+1)<<" : ";
    cin>>st1[i];
  }
  cout<<"Enter marks of ST-02 : "<<endl;
  for(i=0;i<4;i++)
  {
    cout<<"Enter marks of sub "<<(i+1)<<" : ";
    cin>>st2[i];
  }
  cout<<"Enter marks of ST-03 : "<<endl;
  for(i=0;i<4;i++)
  {
    cout<<"Enter marks of sub "<<(i+1)<<" : ";
    cin>>st3[i];
  }
}

void int_marks::show()
{
  cout<<"Internal marks of viva : "<<int_viva<<endl;
  int i;
  cout<<"Marks of ST-01 : "<<endl;
  for(i=0;i<4;i++)
  {
    cout<<"Marks of sub "<<(i+1)<<" : "<<st1[i]<<endl;
  }
  cout<<"Marks of ST-02 : "<<endl;
  for(i=0;i<4;i++)
  {
    cout<<"Marks of sub "<<(i+1)<<" : "<<st2[i]<<endl;
  }
  cout<<"Marks of ST-03 : "<<endl;
  for(i=0;i<4;i++)
  {
    cout<<"Marks of sub "<<(i+1)<<" : "<<st3[i]<<endl;
  }
}

void ext_marks::read()
{
  cout<<"Enter marks of external viva : "<<endl;
  cin>>ext_viva;
  cout<<"Enter marks of End-Term : "<<endl;
  int i;
  for(i=0;i<4;i++)
  {
    cout<<"Enter marks of sub "<<(i+1)<<" : ";
    cin>>end_term[i];
  }
}

void ext_marks::show()
{
  cout<<"External marks of viva : "<<ext_viva<<endl;
  int i;
  cout<<"Marks of End-Term : "<<endl;
  for(i=0;i<4;i++)
  {
    cout<<"Marks of sub "<<(i+1)<<" : "<<end_term[i]<<endl;
  }
}

void details::read()
{
  cout<<"Enter name : "<<endl;
  cin>>name;
  cout<<"Enter roll no. : "<<endl;
  cin>>roll;
  cout<<"Enter branch : "<<endl;
  cin>>branch;
}

void details::show()
{
  cout<<"Name : "<<name<<endl;
  cout<<"Roll no. : "<<roll<<endl;
  cout<<"Branch : "<<branch<<endl;
}

void result::read()
{
  details::read();
  int_marks::read();
  ext_marks::read();
}

void result::calc()
{
  int int_sum=0,ext_sum=0,i;
  for(i=0;i<4;i++)
  {
    if(st1[i] < st2[i])
    {
      if(st1[i] < st3[i])
      {
        int_sum=int_sum+st1[i];
      }
    }
    if(st2[i] > st3[i])
    {
      int_sum=int_sum+st2[i];
    }
  }
  int_sum=int_sum/2;
  int_sum=int_sum+int_viva;
  for(i=0;i<4;i++)
  {
    ext_sum=ext_sum+end_term[i];
  }
  ext_sum=ext_sum+ext_viva;
  percent=(double)(int_sum+ext_sum)*20;
}

void result::show()
{
  cout<<"************R E S U L T************"<<endl;
  cout<<"Percentage : "<<percent<<endl;
  details::show();
  int_marks::show();
  ext_marks::show();
}
