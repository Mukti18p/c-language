#include<stdio.h>
int main()
{
    int i,j;
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
            printf("Element is %d position in array",i+1);
            break;
        }
    }
}