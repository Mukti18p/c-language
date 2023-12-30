#include<stdio.h>

int main()

{
    int i,n;
    float sum=1,d;

    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        d=1.0/i;
        sum=sum+d;

    }

    printf("%f",sum);

}
