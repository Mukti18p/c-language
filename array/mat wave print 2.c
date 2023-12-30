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
    for(j=0;j<c;j++)
    {
        if(j%2==1)
        {
            for(i=0;i<r;i++)
            {
                brr[i][j]=arr[i][j];
            }
        }
        else if(j%2==0)
        {
            for(k=r-1,i=0;k>=0,i<r;k--,i++)
            {
                brr[k][j]=arr[i][j];
            }
        }


    }
    printf("\n");
   for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
    {
        printf("%d ",brr[i][j]);
    }
    printf("\n");
   }

}
   