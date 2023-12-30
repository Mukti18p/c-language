#include<stdio.h>

int main()
{
    int i,n;
    float sum=0;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i<n)
         {
            printf("1/%d +",i);
            sum = sum +1/(float)i;
         }
         if(i==n)
         {
            printf("1/%d ",i);
            sum = sum +1/(float)i;

         }


    }
        printf("The sum is %f",sum);


    return 0;
}
