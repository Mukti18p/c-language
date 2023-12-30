#include <stdio.h>
#include <string.h>
 
int main()
{
   int a[3][4];
   int *ptr=&a[0][0];
   int i,j,sum=0,max=-1;
   for(i=0;i<3;i++)
   {
    for(j=0;j<4;j++)
    {
        scanf("%d",ptr+4*i+j);
    }
   }
   for(i=1;i<3;i++)
   {
    for(j=0;j<4;j++)
    {
        printf("%d ",*(ptr+4*i+j));
    }
    printf("\n");
   }
   printf("total marks each student\n");
   for(i=0;i<3;i++)
   {
    sum=0;
    for(j=1;j<4;j++)
    {
       sum += *(ptr+4*i+j);
    }
    if(max<sum)
    {
        max=sum;
    }
    printf("%d ",sum);
   }
   printf("total marks each subject\n");
   for(j=1;j<4;j++)
   {
    sum=0;
    for(i=0;i<3;i++)
    {
        sum += *(ptr+4*i+j);
    }
    printf("%d ",sum);
   }
   printf("highest marks %d\n",max);
}