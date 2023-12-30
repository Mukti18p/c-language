#include<stdio.h>
int main()
{
    int i,j;
    int flag=0;
    int arr[5];
    int ele;
    printf("enter the ele: \n");
    scanf("%d",&ele);
    printf("Enter the new array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",arr+i);
    }
    for(i=0;i<5;i++)
    {
        if(ele == *(arr+i))
        {
            printf("ele found");
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("No ele found");
    }
}