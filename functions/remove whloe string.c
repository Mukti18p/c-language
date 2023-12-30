#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char str[100]="Hello world"; // dlrow olleh
    int le=strlen(str);

    for(i=le-1;i>=0;i--)
    {
       for(j=0;j<=le;j++)
       {
            str[j]=str[j+1];
            if(j==le)
            {
                str[le]=str[0];
            }
       }
       puts(str);
       continue;

    }
    str[le]='\0';
    puts(str);
}