#include<stdio.h>
int main()
{
    int i,j;
    int temp=1;
    for(i=0;i<4;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d",temp);
            temp++;
        }
        printf("\n");
    }
}