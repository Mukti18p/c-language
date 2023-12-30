#include<stdio.h>

int main()

{
    int a=1,i,n,sum=0,k;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        printf("%d \n",a);
        sum=sum+a;
        a=1+a*10;
    }
    printf("%d",sum);




}
