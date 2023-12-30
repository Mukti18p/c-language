#include<stdio.h>

int main()
{
    int a,sum=0,td,num;
    scanf("%d",&a);
    td=a;
    num=a;

    while(a!=0)
    {
        a=td%10;
        sum=sum+a*a*a;
        td=td/10;
    }
    if(sum==num)
    {
        printf("The number is armstrong");
    }
    else
    {
        printf("The number is not armstrong");
    }



}
