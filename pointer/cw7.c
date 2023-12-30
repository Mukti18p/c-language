#include<stdio.h>
int main()
{
    int i,j;
    int arr[3][3];
    int brr[3][3];
    int *p=&arr[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",p+3*i+j);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",*(p+3*i+j));
        }
        printf("\n");
    }

}