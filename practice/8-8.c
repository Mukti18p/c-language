#include<stdio.h>
int main()
{
    int i,j;
    int a[5][5],*ptr=&a[0][0];
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            *(ptr+5*i+j)=-1;
        }
    }
    for(i=1;i<5;i++)
    {
        for(j=0;j<i;j++)
        {
            *(ptr+5*i+j)=1;
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==j)
            {
                *(ptr+5*i+j) = 0;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",*(ptr+5*i+j));
        }
        printf("\n");
    }
}