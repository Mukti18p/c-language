#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    int n;
    scanf("%d",&n);
    int arr[n];
    int max=0;
    int min=1000;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("\n%d\n",max);
    printf("%d\n",min);
}