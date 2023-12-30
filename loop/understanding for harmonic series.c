#include<stdio.h>

int main()
{

  int i,n;
  float s=0.0;
  scanf("%d",&n);

  for(i=1;i<=n;i++)
  {

          s=s+1/(float)i;

  }

  printf("The sum is %f",s);

}
