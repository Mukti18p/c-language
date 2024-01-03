#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,count=1,t;
    for(i=0;i<5;i++)
    {
        t=i;
        count=0;
        for(j=0;j<5-i;j++)
        {
            printf(" ");
        }
        for(j=0;j<2*i+1;j++)
        {
           
            if(count<=i)
            {
                t++;
                count++;
                printf("%d",t);
               
            }
            else{
                t--;
                printf("%d",t);
                count++;
            }
        }
        printf("\n");
    }

}    