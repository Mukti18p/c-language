#include<stdio.h>

int main()
{
    int i,a=9;
    for(i=100;i<=200;i++)
    {
        if(i%a==0)
        {
            printf("%d ",i);
        }
    }
}
