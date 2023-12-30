#include<stdio.h>
#include<string.h>

int main()
{
    int j=0;
    char a[20],b[20];
    char *str=a , *str1=b;

    scanf("%s",str);
    scanf("%s",str1);
    j=strlen(str)-1;
    str=str+j;
    
     while(*(++str));

    while(*(str++) = *(str1++));

    *(str)='\0';
    (str)=a;
    printf("Concatenated string = %s", str);

}