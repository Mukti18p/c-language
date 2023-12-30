#include<stdio.h>
int main()
{
    int i,j;
    int sum;
    int num;
    int ti=0,temp=0,q=1;
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                q=0;
                break;
            }
            else{
                q=1;
                continue;
            }
        }
        if(q==1)
        {
            if(num%i==0)
            {
                printf("%d\n",i);
                temp=temp+i;
            }
        }
    }
    printf("sum : %d",temp);
    
}