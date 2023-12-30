#include<stdio.h>

int main()
{
    int i,j;
    int occr=0;
    int temp=0;
    int n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
        printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    int ele;
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(ele==arr[i])
        {
            temp++;
            for(j=i;j<n;j++)
            {
                arr[i]=arr[i+1];
            }
        }
    }
    n=n-temp;
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

}