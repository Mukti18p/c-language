#include<stdio.h>
/*  0 1 2
  0 1 2 3    
  1 2 3 4
  2 3 4 5
  3 7 8 9
   */
int main()
{
    int r,c;int i,j,k,m;
    printf("Raws:");
    scanf("%d",&r);
    printf("coloumns:");
    scanf("%d",&c);

    int arr[r][c];
    int brr[r][c];
    printf("enter elements:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        if(i%2==0)
        {
            for(j=0;j<c;j++)
            {
                brr[i][j]=arr[i][j];
            }
        }
        else if(i%2==1)
        {
            for(k=c-1,j=0;k>=0,j<c;k--,j++)
            {
                brr[i][k]=arr[i][j];
            }
        }


    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }


}
   