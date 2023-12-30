#include<stdio.h>
int main()
{
    int i=0;
    char a[20];
    char *str=a;
    scanf("%s",str);
    printf("%s \n",str);
    printf("%c\n",*str);
    while(*(str++) != '\0')
    {
        i++;
    }
    printf("%d",i);

}