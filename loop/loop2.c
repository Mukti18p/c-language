#include<stdio.h>

int main()

{
    int l=5,a=1,i,j,k;

    for(i=0;i<4;i++)
    {
        for(k=1;k<4-i;k++)
        {
            printf(" ");
        }

        for(j=0;j<=i;j++)
        {
            printf("%d ",a);
            a++;
        }


        printf("\n");
    }


}
