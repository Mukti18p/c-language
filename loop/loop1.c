#include <stdio.h>
int main ()
{
    int a=1,b=0,i,j,k;


    for(i=1;i<=5;i++)
    {
        if(i%2==1)
        {
            for(j=1;j<=i;j++)
            {
                if(j%2==1)
                    printf("%d",a);
                else
                    printf("%d",b);
            }
        }
        else
            for(k=1;k<=i;k++)
            {
                if(k%2==1)
                    printf("%d",b);
                else
                    printf("%d",a);

            }
            printf("\n");
    }
}
