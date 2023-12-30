#include<stdio.h>

int main()
{
    int fd,sd,i,n,sum=0;
    fd=0;
    sd=1;
    scanf("%d",&n);
    printf("%d %d ",fd,sd);


    for(i=1;i<=n;i++)
    {
        sum=fd+sd;
        printf("%d ",sum);
        fd=sd;
        sd=sum;

    }
}
