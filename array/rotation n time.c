#include <stdio.h> 
 #include<limits.h>
 // 1 2 3 4 5    5 1 2 3 4  4 5 1 2 3   3 4 5 1 2
 void main()
{ 
    int i,j;int n;
    int r;int temp;
        printf("enter the raws:");
    scanf("%d",&r);
    printf("enter the elements:");

    int arr[r];int brr[r];
    for(i=0;i<r;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the rotation number:");
    scanf("%d",&n);
    for(int k=0;k<n;k++)
    {
        for(i=0;i<r;i++)
        {
            if(i!=r-1)
            {
                brr[i+1]=arr[i];
            }
            else{
                brr[0]=arr[i];
            }
        }
        for(i=0;i<r;i++)
        {
            arr[i]=brr[i];
        }
    }
    for(i=0;i<r;i++)
    {
        printf("%d ",brr[i]);
    }

} 