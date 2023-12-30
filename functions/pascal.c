#include<stdio.h>
int fact(int a)
{
    int t1=1;
    for(int i=a;i>0;i--)
    {
        t1=t1*i;
    }
    return t1;
}
int comb(int y,int x)
{
   int t;
    t=fact(y)/(fact(x)*fact(y-x));
    return t;
}
int main()
{
    int i,j;
    int r;int k;
    scanf("%d",&r);
    int v;
    for(i=0;i<r;i++)
    {
        for(k=r-i;k>=0;k--)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            if(i-j!=0 || i-j!=i){
                 v = comb(i,j);
            }     
            else
            {
                v=1;
            }
            printf("%3d",v);
        }
        printf("\n");
    

    }
}