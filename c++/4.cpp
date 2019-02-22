//12:07:2018
//WAP to display sum of digits od entered number.
#include <iostream>
using namespace std;
int main()
{
  int sum=0,temp,n,rem;
  cout<<"Enter the number :"<<endl;
  cin>>n;
  temp=n;
  while(temp!=0)
  {
    rem=temp%10;
    sum=sum+rem;
    temp=temp/10;
  }
  cout<<"Sum of all digits in "<<n<<" is "<<sum<<endl;
  return 0;
}
