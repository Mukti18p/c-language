#include<stdio.h>
#include<string.h>

int main()
{
    int i=0;
    char arr[100];
    gets(arr);
    
    while(arr[i]!='\0')
    {
         if(arr[i]<='z' && arr[i]>='a')
         {
            arr[i]=arr[i]-32;
         }
         else if(arr[i]>='A' && arr[i]<='Z')
         {
            arr[i]=arr[i]+32;
         }
         i++;        
    }
    puts(arr);
}