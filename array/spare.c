#include<stdio.h>
int main()
{
    int r,c;int i,j,k,m;
    int count=0;
    printf("Raws:");
    scanf("%d",&r);
    printf("coloumns:");
    scanf("%d",&c);

    int arr[r][c];
    int brr[r][c];
    printf("elements:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        count=0;
        for(j=0;j<c;j++)
        {
            
            if(arr[i][j]==0)
            {
                count++;
            }
        }
        if(count==3)
        {
            printf("The matrix is spare");
            break;
        }
    }
    for(j=0;j<c;j++)
    {   count=0;
        for(i=0;i<r;i++)
        {
            if(arr[i][j]==0)
            {
                count++;
            }
        }
        if(count==3)
        {
            printf("The matrix is spare");
            break;
        }
    }
}