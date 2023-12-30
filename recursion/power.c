#include<stdio.h>
#include<math.h>
int power(int a,int b)
{
    if(b==0) return 1;
    return a*power(a,b-1);
}   

int main()
{
    int n;int m;
    scanf("%d",&n);
    scanf("%d",&m);
    int temp = power(n,m);
    printf("%d",temp);
    return 0;   
}   