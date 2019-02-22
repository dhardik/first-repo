//18:07:2018
#include <iostream>
using namespace std;
class bank_details
{
  int acc_no,bal,s_no;
  string name;
public:
  void read();
  void credit();
  void debit();
  void fund_transfer();
  void display();
};

int count=0;

/* main() start here */
int main()
{
  int n;
  cout<<"Enter total number of members in bank :"<<endl;
  cin>>n;
  bank_details mem[n];
  int i;
  for(i=0;i<n;i++)
  {
    mem[i].read();
  }
  cout<<endl<<"Select the operation you want to do :"<<endl;
  cout<<"1 . Credit amount in main balance "<<endl;
  cout<<"2 . Debit amount in main balance "<<endl;
  cout<<"3 . Fund transfer between accounts "<<endl;
  cout<<"4 . Display Bank Details (Balance Enquiry) "<<endl;
  int choice=0,s;
  cin>>choice;
  if(choice==1)
  {
    cout<<"Please enter your serial number :"<<endl;
    cin>>s;
    mem[--s].credit();
  }
  else if(choice==2)
  {
    cout<<"Please enter your serial number :"<<endl;
    cin>>s;
    mem[--s].debit();
  }
  else if(choice==3)
  {
    
  }
  else if(choice==4)
  {
    cout<<"Please enter your serial number :"<<endl;
    cin>>s;
    mem[--s].display();
  }
  return 0;
}
/* main() end here */

/* read() start here */
void bank_details::read()
{
  cout<<"Enter your account number :"<<endl;
  cin>>acc_no;
  cout<<"Enter your name :"<<endl;
  cin>>name;
  cout<<"Enter your total balance :"<<endl;
  cin>>bal;
  ++count;
  s_no=count;
  cout<<"Your serial number is "<<s_no<<endl;
  cout<<"Please remember it !!!"<<endl;
}
/* read() end here */

/* credit() start here */
void bank_details::credit()
{
  int temp;
  cout<<"Enter amount to be credited :"<<endl;
  cin>>temp;
  bal=bal+temp;
  cout<<"Your account balance is credited with Rs."<<temp<<endl;
  cout<<"Total balance is Rs."<<bal<<endl;
}
/* credit end here */

/* debit start here */
void bank_details::debit()
{
  int temp;
  cout<<"Enter amount to be debited :"<<endl;
  cin>>temp;
  bal=bal-temp;
  cout<<"Your account balance is debited with Rs."<<temp<<endl;
  cout<<"Total balance is Rs."<<bal<<endl;
}
/* debit() end here */

/* display() start here */
void bank_details::display()
{
  cout<<"Your bank details are :"<<endl;
  cout<<"Name = "<<name<<endl;
  cout<<"Account no. = "<<acc_no<<endl;
  cout<<"Available Balance = "<<bal<<endl;
}
