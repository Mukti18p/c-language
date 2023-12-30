#include<stdio.h>
int main()
{
    int i,j;
    int arr[5];
    int *p1=&arr[0];

    for(i=0;i<5;i++)
    {
        scanf("%d",p1);
        p1++;
    }
    p1=&arr[0];
    for(i=0;i<5;i++)
    {
        printf("%d ",*p1);
        p1++;
    }
}