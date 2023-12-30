#include<stdio.h>
int maze(int cr,int cc,int er,int ec)
{
    int rightways = 0;
    int downways = 0;
    if(cr==er && cc==ec)
     return 1;
    if(cc==ec)
    {
        rightways += rightways + maze(cr+1,cc,er,ec);
    }
    if(er==cr)
    {
        downways  += maze(cr,cc+1,er,ec);
    }
    if(cr<er && cc<ec)
    {
        downways += maze(cr+1,cc,er,ec);
        rightways += maze(cr,cc+1,er,ec);
    }
    int totalways;
    totalways = rightways + downways;   
    return totalways;
}
int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int noofways = maze(1,1,n,m);
    printf("%d",noofways);
    return 0;
}