#include<stdio.h>
#include<string.h>

int main()
{
    char str[]="123456789";
   int i,j;
   int k;
   for(i=0;i<5;i++)
   {
    int temp=i;
    for(k=4-i;k>=0;k--)
    {
        printf(" ");
    }
    for(j=0;j<=i;j++)
    {
        printf("%c",str[temp]);
        temp++;

    }
    k=2*i-1;
    for(j=i-1;j>=0;j--)
    {
        printf("%c",str[k]);
        k--;
    }
   
    printf("\n");
    
   }



}