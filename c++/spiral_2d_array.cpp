#include <iostream>
using namespace std;
int main()
{
  int r,c,i,j;
  cin>>r>>c;
  int arr[r][c];
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      cin>>arr[i][j];
    }
  }
  int l=0,k=0,last_row,last_col;
  last_col=c-1;
  last_row=r-1;
  while(k<=last_row && l<=last_col)
  {
    for(i=l;i<=last_col;i++)
    {
      cout<<arr[k][i]<<" ";
    }
    k++;
    for(i=k;i<=last_row;i++)
    {
      cout<<arr[i][last_col]<<" ";
    }
    last_col--;
    if(k<=last_row)
    {
      for(i=last_col;i>=l;i--)
      {
        cout<<arr[last_row][i]<<" ";
      }
      last_row--;
    }
    if(l<=last_col)
    {
      for(i=last_row;i>=k;i--)
      {
        cout<<arr[i][l]<<" ";
      }
      l++;
    }
  }
  return 0;
}
