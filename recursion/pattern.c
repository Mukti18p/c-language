#include<stdio.h>
//3211132111 //432111432111432111 //211121112111
void preinpost(int n)
{
    if(n==0) return;
    printf("%d ",n);
    preinpost(n-1);
     printf("%d ",n);
     preinpost(n-1);
      printf("%d ",n);
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);

    preinpost(n);
    return 0;
}