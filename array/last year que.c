#include<stdio.h>
int main()
{
    int i,j;int c;
    int r,temp;
    printf("enter the raw:");
    scanf("%d",&r);
    printf("enter the second array raw:");
    scanf("%d",&c);
    int arr[r];int brr[c];int crr[r+c];
    printf("Enter the first array element:");
    for(i=0;i<r;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the second array element:");
    for(i=0;i<c;i++)
    {
        scanf("%d",&brr[i]);
    }

    for(i=0;i<r;i++)
    {
        for(j=i+1;j<r;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<c;i++)
    {
        for(j=i+1;j<c;j++)
        {
            if(brr[i]<brr[j])
            {
                temp=brr[i];
                brr[i]=brr[j];
                brr[j]=temp;
            }
        }
    }
    for(i=0;i<r;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i=0;i<c;i++)
    {
        printf("%d ",brr[i]);
    }
    for(i=0;i<r;i++)
    {
        crr[i]=arr[i];
    }
    for(i=0;i<c;i++)
    {
        crr[r+i]=brr[i];
    }
    temp=0;
    for(i=0;i<r+c;i++)
    {
        for(j=i+1;j<r+c;j++)
        {
            if(crr[i]<crr[j])
            {
                temp=crr[j];
                crr[j]=crr[i];
                crr[i]=temp;
            }
        }
    }
    printf("\n");
    for(i=0;i<r+c;i++)
    {
        printf("%d ",crr[i]);
    }
    
}   