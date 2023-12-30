#include <stdio.h>
int stair(int n)
{
    if(n==1) return 1;
    if(n==2) return 2;
    int totalways=stair(n-1)+stair(n-2);
    return totalways;

}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",stair(n));
    return 0;
}   