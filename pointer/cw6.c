#include<stdio.h>
int main()
{
    int i,j;
    int arr[3][3];
    int *p;
    p=&arr[0][0];
    printf("Input ele:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",p+(3*i)+j);
        }
    }
    printf("Output eles:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",*(p+(3*i)+j));
        }
    }
}