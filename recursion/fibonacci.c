#include<stdio.h>
// 1 1 2 3 5 8 13 21
int fibo(int n)
{
    if(n==1 || n==2) return 1;
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d is the Nth term", fibo(n));

}