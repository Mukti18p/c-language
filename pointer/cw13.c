#include<stdio.h>
int main()
{
    int i,j;

    char a[20],b[20];
    char *str=a , *str1=b;

    gets(str);
    gets(str1);

    while(*(str) != '\0' && *(str1) != '\0' && *(str) == *(str1))
    {
        str++;
        str1++;
    }
    if(*(str) == '\0' && *(str1) == '\0')
    {
        printf("both two strings are equal");
    }
    else{
        printf("Strings are not equal");
    }
}