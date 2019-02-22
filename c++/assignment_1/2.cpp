#include <iostream>
using namespace std;
class number
{
  int n;
public:
  void read();
  void calc(number);
  void show(number);
};

int main()
{
  number orignal,reveresed;
  orignal.read();
  reveresed.calc(orignal);
  reveresed.show(orignal);
  return 0;
}

void number::read()
{
  cout<<"Enter the number :"<<endl;
  cin>>n;
}

void number::calc(number ori)
{
  int i,j,arr[10],temp;
  temp=ori.n;
  arr[0]=1;
  for(i=1;i<10;i++)
  {
    arr[i]=arr[i-1]*10;
  }
  int len=0,num=0,sum=0;
  while(temp!=0)
  {
    len++;
    temp=temp/10;
  }
  for(i=(len-1);i>=0;i--)
  {
    num=(((ori.n)%10)*arr[i]);
    sum=sum+num;
    (ori.n)=(ori.n)/10;
  }
  n=sum;
}

void number::show(number ori)
{
  cout<<"orignal number = "<<ori.n<<endl;
  cout<<"reveresed number = "<<n<<endl;
}
