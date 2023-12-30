#include<stdio.h>
int main()
{
    int n1=50,n2=1000,i,j=0,hcf=0;

    j=(n1>n2)?n1:n2;

    for(i=1;i<=j;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf=i;
        }
    }
    printf("%d",hcf);

}
