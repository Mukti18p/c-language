#include<stdio.h>

int main()

{   int num,i,j,b,c=1,d=0,ta;

    scanf("%d",&num);


    for(ta=num;ta>0;ta/=10)
    {
        c=1;
        for(j=1;j<=ta%10;j++)
        {
            c=c*j;

        }
        d=d+c;

    }
    printf("%d",d);

}
//lcm
