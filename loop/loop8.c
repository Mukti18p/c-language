#include<stdio.h>

int main()
{
    int i,n,j,a=1,b=0;


    for(i=1;i<=5;i++)
    {
        if(i%2==1)
        {
            for(j=1;j<=i;j++)
            {
                if(j%2==0)
                printf("%d",b);
                else
                    printf("%d",a);

            }
        }
       else if(i%2==0)
        {
            for(j=1;j<=i;j++)
            {
                if(j%2==0)
                    printf("%d",a);
                else
                    printf("%d",b);
            }
        }

        printf("\n");
    }
}
