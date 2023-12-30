#include<stdio.h>
int num(int n,int i)
{
    if(n>0)
    {
        n=n/10;
        i++;
        return num(n,i);
    }
    else{
        return i;
    }
}
int main()
{
    int i=0;
    int n;
    scanf("%d",&n);
    
   i = num(n,0);
   printf("%d",i);
   return 0;

}