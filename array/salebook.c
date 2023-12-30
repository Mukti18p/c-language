#include<stdio.h>
int main()
{
    int i,j,k=0;
    int arr[3][3];int sum=0;
    int esum=0;
    int item=0;int brr[14];int crr[14];
        int m=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        item=0;
        esum=0;
        for(j=0;j<3;j++)
        {
            sum=sum+arr[i][j];
            esum=esum+arr[i][j];
           
           item=item+arr[j][i];
          
        }
         brr[k]=esum;
         k++;
         crr[m]=item;
         m++;
    }
    printf("Total item per each girl:\n");
    for(i=0;i<k;i++)
    {
        printf("%d\n",brr[i]);
    }
    printf("total value of each item sold:\n");
    for(i=0;i<m;i++)
    {
        printf("%d\n",crr[i]);
    }

    printf("total items:%d ",sum);
}