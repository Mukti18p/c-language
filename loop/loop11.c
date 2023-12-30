#include<stdio.h>
int main()

{
    int i,j,k,num;
    int x,y,z;

    for(i=1;i<=5;i++)
    {
        for(k=0;k<=5-i;k++)
        {
            printf(" ");
        }
        if(i==1)
            printf("*");
        else
        {
           for(j=1;j<=i+(i-1);j++)
           {
            printf("*");

           }
        }
        printf("\n");

    }

    for(x=4;x>=1;x--)
    {
        for(z=0;z<=5-x;z++)
        {
            printf(" ");
        }

        for(y=1;y<=x+(x-1);y++)
        {
            printf("*");
        }

        printf("\n");
    }
}
