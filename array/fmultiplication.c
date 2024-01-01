#include<stdio.h>

void display(int r,int c,int brr[r][c])

{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
}
void mul(int r, int c,int arr[r][c],int brr[r][c],int crr[r][c])
{
    int i=0,j=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            crr[i][j]=arr[i][j]*brr[j][i];
        }
    }
    display(r,c,crr);
}
int read(int r,int c,int arr[r][c],int brr[r][c],int crr[r][c])
{
    int i=0,j=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }
    mul(r,c,arr,brr,crr);
    return 0;
    
}
int main()
{
    int n=3;int m=3;
    
    int arr[3][3];int brr[3][3];int crr[3][3];
    read(m,n,arr,brr,crr);
   
}