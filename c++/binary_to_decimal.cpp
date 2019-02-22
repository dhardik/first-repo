#include <iostream>
using namespace std;
int binaryToDecimal(int num)
{
  int count=0,temp;
  temp=num;
  while(temp!=0)
  {
    count++;
    temp/=10;
  }
  temp=num;
  int i,brr[count],k=0;
  while(temp!=0)
  {
    brr[k]=temp%10;
    k++;
    temp/=10;
  }
  int arr[count];
  arr[0]=1;
  for(i=1;i<count;i++)
  {
    arr[i]=arr[i-1]*2;
  }
  int sum=0,prod;
  for(i=0;i<count;i++)
  {
    prod=arr[i]*brr[i];
    sum=sum+prod;
  }
  return sum;
}
int main()
{
  int num,res;
  cin>>num;
  res=binaryToDecimal(num);
  cout<<"Binary : "<<num<<endl;
  cout<<"Decimal : "<<res<<endl;
  return 0;
}
