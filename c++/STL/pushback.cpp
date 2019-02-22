//To scan and print vector untill -1 is entered
#include <iostream>
#include <vector>

using namespace std;

vector <int> mv;

int main()
{
  int num=0;
  //to scan the elements of vector
  while(num!=-1)
  {
    cin>>num;
    mv.push_back(num);
  }

  //to display the elements of vector
  for(int i=0;i<mv.size();i++)
  {
    cout<<mv[i]<<endl;
  }
  return 0;
}
