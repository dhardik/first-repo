//code for rock paper scissor problem hackerrank
#include <stdio.h>
#include <string.h>
int main()
{
  int n,l;
  scanf("%d\n",&l); //here "\n" is used because of gets function.
  n=2*l;
  char ch[n],arr[l],brr[l];
  gets(ch);
  int i,k=0,j=0;
  for(i=0;i<n;i++)
  {
    if(i%2==0)
    {
      arr[j]=ch[i];
      j++;
    }
    else
    {
      brr[k]=ch[i];
      k++;
    }
  }
  int counta=0,countb=0;
  for(i=0;i<l;i++)
  {
    if(arr[i]==brr[i])
    {
      printf("DRAW\n");
    }
    else if(arr[i]=='R' && brr[i]=='P')
    {
      printf("B WINS\n");
      countb++;
    }
    else if(arr[i]=='R' && brr[i]=='S')
    {
      printf("A WINS\n");
      counta++;
    }
    else if(arr[i]=='P' && brr[i]=='S')
    {
      printf("B WINS\n");
      countb++;
    }
    else if(arr[i]=='P' && brr[i]=='R')
    {
      printf("A WINS\n");
      counta++;
    }
    else if(arr[i]=='S' && brr[i]=='P')
    {
      printf("A WINS\n");
      counta++;
    }
    else if(arr[i]=='S' && brr[i]=='R')
    {
      printf("B WINS\n");
      countb++;
    }
  }
  if(counta>countb)
  {
    printf("A WINS TOURNAMENT");
  }
  else if(countb>counta)
  {
    printf("B WINS TOURNAMENT");
  }
  else if(counta==countb)
  {
    printf("DRAW");
  }
  return 0;
}
