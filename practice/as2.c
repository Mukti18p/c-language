#include<stdio.h>
int main()
{
    int i,j;
    int a,b;
    int flag=1;
    printf("Enter the interval:\n");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        flag=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
            else{
                flag=1;
            }
        }
        if(flag==1)
        {
            printf("%d\n",i);
        }
    }
}