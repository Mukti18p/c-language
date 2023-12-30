#include<stdio.h>

int main()
{
    int i,j,n,a,sum=1;
    scanf("%d",&n);
    printf("%d ",a=1);
    for(i=1;i<n;i++)
    {
        printf("%d ",a+=2);
        sum=sum+a;
    }
    printf("\n%d",sum);
}
