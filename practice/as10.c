#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;

    for(i=4;i>0;i--)
    {
        for(j=0;j<2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}