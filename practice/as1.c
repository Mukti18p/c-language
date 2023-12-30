#include<stdio.h>
int main()
{
   int i,j;
   int sum=0;
    int a=0,ti;
   for(i=1;i<1000;i++)
   {
    ti=i;
    sum=0;
        while(ti!=0)
        {
            a=ti%10;
            sum=sum+a*a*a;
            ti=ti/10;
        }
        if(sum==i)
        {
            printf("%d ",i);
        }
   }
}