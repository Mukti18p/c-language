#include<stdio.h>
#include<string.h>
//hello  //abcdef  
int main()
{
    int i,j;
    char arr[100];
    gets(arr);
    char brr[100];
    gets(brr);
    int le,le1;
    le=strlen(arr);
    le1=strlen(brr);
    printf("%d",le1);
    int n;
    scanf("%d",&n);
    i=le1-n;

    for(j=le;j<le+n;j++)
    {
        arr[j]=brr[i];
        i++;
    }
    arr[j]='\0';
    puts(arr);
    puts(brr);

}