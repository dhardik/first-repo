//13:07:2018
//WAP to check weather a character is vowel or not
#include <iostream>
using namespace std;
int main()
{
  cout<<"Enter the character :"<<endl;
  char ch;
  int f=0;
  cin>>ch;
  if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
  {
    f=1;
  }
  else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
  {
    f=1;
  }
  if(f==1)
  {
    cout<<"Vowel"<<endl;
  }
  else
  {
    cout<<"Consonant"<<endl;
  }
  return 0;
}
