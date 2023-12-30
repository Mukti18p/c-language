#include<stdio.h>

int main()
{
    int a=1,d=4,M,sum,i;

    for(i=1;i<=10;i++)
    {
        M=a+(i-1)*d;
        sum=sum+M;

    }
    printf("%d",sum);
}
//gp series
