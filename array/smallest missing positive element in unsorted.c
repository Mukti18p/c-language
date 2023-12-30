#include<stdio.h>
// 3 1 4 10 -5 15 2 -10 -2  // -10 -5 -2 1 2 3 4 10 15
int main()
{
    int i,j,k=0;int count=0;int min=1000;
    int r;int temp;
    scanf("%d",&r);
    int arr[r];int brr[r];

    for(i=0;i<r;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<r;i++)
    {
        for(j=i+1;j<r;j++)
        {
            if(arr[i]>arr[j])
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
    for(i=0;i<r;i++)
    {
        if(arr[i]>0)
        {
        for(j=i+1;j<i+2;j++)
        {
            if(arr[j]!=arr[i]+1)
            {
                brr[k]=arr[i]+1;
               k++;
            }
        }
        }
    }
   
     printf("\n%d\n",brr[0]);
       
    
}