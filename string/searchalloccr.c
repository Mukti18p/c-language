#include<stdio.h>
#include<string.h>

int main()
{
    int i=0,j=0;
    char arr[100];
    gets(arr);
    int count=0;char temp='h';int count1=0;
    // hellollhe  
    printf("h all occr are: ");
    for(i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==temp)
        {
            count++;
            printf("%d ",i);
            
        }
    }
    
}