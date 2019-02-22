//16:07:2018
/*WAP to read marks of 10 students of 10 subjects and display
their precentages along with the Percentage of topper(s) */
#include <iostream>
using namespace std;
int arr[10],i,j,k=0,temp;
class student
{
  int sub[10],j;
public:
  int p;
  void read();
  void calculate();
  void display();
  void topper();
}obj[10];

int main()
{
  int i,top=0;
  for(i=0;i<10;i++)
  {
    cout<<"Enter marks of student "<<i+1<<endl;
    obj[i].read();
    obj[i].calculate();
  }
  for(i=0;i<10;i++)
  {
    obj[i].display();
  }
  for(i=0;i<10;i++)
  {
    for(j=i+1;j<10;j++)
    {
      if(arr[i]>arr[j])
      {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
  cout<<endl<"topper is "<<arr[9]<<endl;
  for(i=0;i<9;i++)
  {
    if(arr[i]==arr[9])
    {
      cout<<arr[i]<<endl;
    }
  }
  return 0;
}

void student::read()
{
  for(j=0;j<10;j++)
  {
    cout<<"Enter the marks for subject"<<j+1<<endl;
    cin>>sub[j];
  }
}

void student::calculate()
{
  p=0;
  for(j=0;j<10;j++)
  {
    p=p+sub[j];
  }
  p=p/(float)10;
  if(p>temp)
  {
    arr[k]=p;
    k++;
  }
}

void student::display()
{
  cout<<endl<<"Percentage is "<<p<<endl;
}
