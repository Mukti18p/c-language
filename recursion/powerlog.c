#include<stdio.h>
#include<math.h>
int power(int a,int b)
{
    if(b==0) return 1;
    if(b%2==0)
    {
    int c = power(a,b/2);
    return c*c;
    }
    else{

        int c = power(a,b/2);
        return c*c*a;
    }
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