#include<stdio.h>
#include<string.h>

int main()
{
    int i=0;
    char a[20];
    char *str=a;
    char b[20];
    char *str1=b;
    scanf("%s",str);
    printf("%s\n",str);

   strcpy(str1,str);
   printf("%s",str1);

}