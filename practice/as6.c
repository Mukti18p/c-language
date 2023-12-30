#include<stdio.h>
int main()
{
    int i,j;
    int k=1;

    for(i=0;i<5;i++)
    {
        k=1;
        for(j=0;j<=i;j++)
        {
            if(j%2==1)
            {
                printf("%d",k);
                k++;
            }
            else{
                printf("%d",k);
                k--;
            }
        }
        printf("\n");
        
    }
}