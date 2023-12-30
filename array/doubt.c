#include<stdio.h>
// put the zero in the end of the array
int main()
{
    int i,j;
    int r;
    scanf("%d",&r);
    int temp=r;
    int arr[r];
    for(i=0;i<r;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<r;i++)
    {
        if(arr[i]==0)
        {
            for(j=r-1;j>=0;j--)
            {
                if(arr[j]!=0)
                {
                    arr[i]=arr[j];
                    arr[j]=0;
                    r--;
                    break;
                }
                else
                {
                    continue;
                }
            }
        }
    }
    for(i=0;i<temp;i++)
    {
            printf("%d ",arr[i]);

    }

}