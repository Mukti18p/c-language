#include<stdio.h>
int main()
{
    int i,j;
    int arr[3][3];
    int brr[3][3]={0};
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        { 
            scanf("%d",&arr[i][j]);
        }
    }   
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            brr[j][i]=arr[i][j];
        }
    }
    printf("Transpose of matrix is : \n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }

}