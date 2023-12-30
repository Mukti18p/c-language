#include <stdio.h>
#include <limits.h>

void main()
{
    int r,c;
     printf("Enter the raw:");
    scanf("%d",&r);
    printf("Enter the coloums");
    scanf("%d",&c);
    int arr[r][c];
    int i,j;
    int max;
    int sum;
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<r;i++)
    {
        sum=0
        for(j=0;j<c;j++)
        {
            sum = sum + arr[i][j];

        }
        if(max<sum)
        {
            max=sum;
        }
    }
}