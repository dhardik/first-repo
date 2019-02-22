#include <iostream>
using namespace std;
class martix
{
  int n;
  int mat[n][n];
public:
  void read();
  void add(matrix,matrix);
  void display();
};

int main()
{
  matrix obj1,obj2,obj3;
  obj1.add();
  obj2.read();
  obj3.add(obj1,obj2);
}

void martix::read()
{
  cout<<"Enter the size of matrix :"<<endl;
  cin>>n;
  cout<<"Enter the elements of matrix :"<<endl;
  int i,j;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      cin>>mat[i][j];
    }
  }
}

void martix::add(matrix obj1,matrix obj2)
{
  int i,j;
  for(i=0;i<n;i++)
  {
    for
  }
}
