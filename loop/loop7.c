#include<stdio.h>

int main()
{
    int i,d=9,n,a=9,sum=0;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+d;
        d=d*10+a;


    }
    printf("%d",sum);

}
