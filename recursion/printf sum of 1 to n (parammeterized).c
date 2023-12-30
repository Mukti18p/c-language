#include<stdio.h>
// 4 
void id(int n,int s)
{
    if(n==0)
    {printf("%d",s);  return;}
    id(n-1,s+n);
   return;
    
}
int main()
{
    int n;
    scanf("%d",&n);
    id(n,0);
    
    return 0;
}