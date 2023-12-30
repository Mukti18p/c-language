#include<stdio.h>   // 1 to 100
int prime(int x,int y)
{   int count=0;
    for(int i=x;i!=y;i++)
    {
        for(int j=2;j<i/2;j++)
        {
            if(i%j==0 && i!=j)
            {
                count=0;
                break;
            }
            else{
                count=1;
                continue;
            }
        }
        if(count==1)
        {
            printf("%d num is prime\n",i);
        }
    }
    return 0;
}
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    prime(a,b);
    return 0;
}