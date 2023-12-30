#include<stdio.h>
int main()
{
    int i,j;
    int t=0,t1=1;
    for(i=0;i<6;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(i%2==0)
            {
               if(j%2==0)
               printf("%d",t1);
               else
               printf("%d",t);
            }
            else{
                if(j%2==0)
                printf("%d",t);
                else
                printf("%d",t1);
            }
        }
        printf("\n");
    }
}