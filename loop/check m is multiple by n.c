#include<stdio.h>

int main()
{
    int a,b,r;

    scanf("%d %d",&a,&b);
    r=a%b;

    if(r==0)
        printf("A is muliple by B");
    else
        printf("A is not muliple by B");
    return 0;

}

