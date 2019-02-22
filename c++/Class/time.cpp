//17:07:2018
//WAP to print add and subtract of two time ;
#include <iostream>
using namespace std;
int k=0;
class times
{
  int hrs,min,sec;
public:
  void read();
  void add(times,times);
  void subtract(times,times);
  void display();
};

int main()
{
  times t1,t2,t3;
  cout<<"Enter times in 24 hours :"<<endl;
  t1.read();
  t2.read();
  t3.add(t1,t2);
  t3.display();
  t3.subtract(t1,t2);
  t3.display();
  return 0;
}

/* read() start here */
void times::read()
{
  cin>>hrs>>min>>sec;
}
/* read() end here */

/* add() start here */
void times::add(times t1,times t2)
{
  int temp;
  temp=t1.sec+(t1.min*60)+(t1.hrs*60*60);
  temp=temp+(t2.sec+(t2.min*60)+(t2.hrs*60*60));
  hrs=temp/(60*60);
  min=temp%(60*60)/60;
  sec=temp%(60*60)%60;
  k=1;
}
/* add() end here */

/* subtract() start here */
void times::subtract(times t1,times t2)
{
  int temp;
  temp=t1.sec+(t1.min*60)+(t1.hrs*60*60);
  temp=temp-(t2.sec+(t2.min*60)+(t2.hrs*60*60));
  hrs=temp/(60*60);
  min=temp%(60*60)/60;
  sec=temp%(60*60)%60;
  k=2;
}
/* subtract() end here */

/* display() start here */
void times::display()
{
  if(k==1)
  {
    cout<<"The add of time is :"<<endl;
    cout<<hrs<<" hrs  "<<min<<" min  "<<sec<<" sec "<<endl;
  }
  else if(k==2)
  {
    cout<<"The subtract of time is :"<<endl;
    cout<<hrs<<" hrs  "<<min<<" min  "<<sec<<" sec "<<endl;
  }
}
/* display() end here */
