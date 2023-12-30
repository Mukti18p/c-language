#include<stdio.h>
int main()
{
    int i,j;
    int arr[3][3];
    int *p1=&arr[0][0];
    int brr[3][3];
    int *p2=&brr[0][0];
    int crr[3][3];
    int *p3=&crr[0][0];

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",p1+3*i+j);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",p2+3*i+j);
        }

    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            *(p3+3*i+j) = *(p1+3*i+j) + *(p2+3*j+i);
        }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",*(p3+3*i+j));

        }
        printf("\n");
    }
    
}