#include<stdio.h>
int main()
{
    int i,n;
    float sum=0,a=0;

    scanf("%d",&n);

     for(i=1;i<=n;i++)
    {


            a=1/(float)i;
            sum=sum+a;


    }
    printf("%f",sum);



}
