#include <stdio.h>

int main()
{
    int i,j,k,a=7;


    for(i=1;i<=5;i++)
    {
        for(k=i-1;k>=1;k--)
        {
            printf(" ");
        }
        printf("%d",i);
        if(i!=5)
        {
        for(k=a;k>=1;k--)
        {
            printf(" ");
        }
        a=a-2;
        printf("%d",i);
        }
        printf("\n");
    }
    a=1;
    for(i=4;i>=1;i--)
    {
        for(k=1;k<=i-1;k++)
        {
            printf(" ");
        }
        printf("%d",i);
        if(i!=5)
        {
        for(k=1;k<=a;k++)
        {
            printf(" ");
        }
        a=a+2;
        printf("%d",i);
        }
        printf("\n");
    }
}
