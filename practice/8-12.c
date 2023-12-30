#include<stdio.h>
int main()
{
    char a[20],*p=a;
    char b;
    gets(a);
    scanf("%c",&b);
    int i,j,count=0;
    for(i=0;*(p+i) != '\0';i++)
    {
         if(b == *(p+i))
         {
            count++;
         }
    }
    printf("%d",count);
}