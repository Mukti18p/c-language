#include<stdio.h>
int sub(int n,int arr[n][n],int brr[n][n],int crr[n][n],int drr[n][n])
{
    int i=0,j=0;int sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            drr[i][j]=arr[i][j]-brr[i][j];
        }
       
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",drr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int sum(int n,int arr[n][n],int brr[n][n],int crr[n][n],int drr[n][n])
{
    int i=0,j=0;int sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            crr[i][j]=arr[i][j]+brr[i][j];
        }
       
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",crr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int main()
{
    int m;
    scanf("%d",&m);
    int arr[m][m];int brr[m][m];int crr[m][m];int drr[m][m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
        scanf("%d",&brr[i][j]);
        }
    }
    sum(m,arr,brr,crr,drr);
    sub(m,arr,brr,crr,drr);
  
}