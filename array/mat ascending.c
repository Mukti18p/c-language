#include<stdio.h>
int main()
{
    int i,j;
    int r,temp;
    printf("enter the raw:");
    scanf("%d",&r);
    int arr[r];
    for(i=0;i<r;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<r;i++)
    {
        printf("%d ",arr[i]);
    }

}   
