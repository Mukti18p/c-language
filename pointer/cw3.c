#include<stdio.h>
int main()
{
    int i,j;
    int arr[5];
    int brr[5];

    for(i=0;i<5;i++)
    {
        scanf("%d",arr+i);
    }
    for(i=0;i<5;i++)
    {
        *(brr+i)=*(arr+i);
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",*(brr+i));
    }
}