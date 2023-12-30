#include<stdio.h>
#include<string.h>

int main()
{
    int i=0,j=0,k=0;
    char arr[100];
    gets(arr);
    char temp='h';int count=0; int count1=0;
    int le;
    le=strlen(arr);
    for(i=0;i<=le;i++)
    {
        if(arr[i]==temp)
        {
            count++;
            count1=i;
        }

    }
    for(k=count1;k<le;k++)
    {
        arr[k]=arr[k+1];
    }
    le--;
    arr[le]='\0';
    puts(arr);
}