#include<stdio.h>
int main()
{
    int i,j;
    int arr[5];
    int brr[5]={0};
    int *p2=&brr[0];
    int *p1;
    p1=&arr[0];

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
    p1=&arr[0];
    printf("brr array :\n");
    for(i=0;i<5;i++)
    {
        *p2=*p1;
        p1++;
        p2++;
    }
    p2=&brr[0];
    for(i=0;i<5;i++)
    {
        printf("%d ",*p2);
        p2++;
    }

}