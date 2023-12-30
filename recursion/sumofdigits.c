#include<stdio.h>
// 153 1+5+3  i=n%10;  sum=sum+i; n=n/10;
int num(int n,int sum,int i)
{
    if(n>0)
    {
        i=n%10;
        sum=sum+i;
        n=n/10;
        return num(n,sum,i);
    }
    else{
        return sum;
    }
}
int main()
{
    int i=0,j=0,n;
    scanf("%d",&n);

   i= num(n,0,0);
   printf("%d",i);
   return 0;

}
