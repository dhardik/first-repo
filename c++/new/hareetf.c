#include <stdio.h>
int main()
{
  int i,j;
  for(j=6;j>=0;j=j-2)
  {
    for(i=18;i>=18-j;i=i-2)
    {
      printf("%d ",i);
    }
    printf("\n");
  }
return 0;
}
