#include <stdio.h>
int stair(int n)
{
    if(n==1 || n==2) return n;
    if(n==3)  return 4;
    int totalways=stair(n-1)+stair(n-2) + stair(n-3);
    return totalways;

}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",stair(n));
    return 0;
}   

// 0 1 2 3 4 5 6 7 8