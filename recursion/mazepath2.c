#include<stdio.h>
int maze2(int n,int m)
{
    int rightways=0;
    int downways=0;
    if(m==1 && n==1)  return 1;
    if(n==1)
    {
        rightways+=maze2(n,m-1);
    }
    else if(m==1)
    {
        downways+=maze2(n-1,m);
    }
    else{
        rightways+=maze2(n,m-1);
        downways+=maze2(n-1,m);

    }
   int totalways = rightways + downways;
   return totalways;
}
int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int noofways = maze2(n,m);
    printf("%d",noofways);
    return 0;
}