#include<stdio.h>
#include<string.h>

int main()
{
    int i=0,j=0;
    char arr[100];
    gets(arr);
    char temp='a';
    j=strlen(arr)-1;
    while(i<j)   // hello\0  i=0  j=5  
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    puts(arr);
}