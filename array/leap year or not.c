#include<stdio.h>
#include<string.h>
int year(int y)
{
   if(y%4==0 && y%100==0 && y%400==0)
   {
    printf("%d - is the leap year",y);
   }
   else if(y%4==0 && y%100!=0 && y%400==0)
   {
        printf("%d - is the leap year",y);
   }
   else{
    printf("%d is not leap year",y);
   }
}    
int main()
{
    int m;
    scanf("%d",&m);
    year(m);
}