#include<stdio.h>
// greatest divisor  100 20 n1 n2 x n1%x==0 n2%x==0 arr1[]
// arr[],n1,n2,x,index

int gcd(int n1,int n2,int x,int sum)
{
    if(x==n1 || x==n2) return sum;
    if(n1%x==0 && n2%x==0)
    {
        sum=sum*x;
        x++;
    }
    return gcd(n1,n2,x,sum);
}
int main()
{
    int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    int x=1;int index=0;
    int arr[10]={0};
    x=gcd(n1,n2,x,1);
    printf("%d",x);
}