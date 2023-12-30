#include<stdio.h>
#include<string.h>

int main()
{
    int i=0;int k=0;
    char arr[100];
    gets(arr);
    int j;
    j=strlen(arr)-1;
   
    // newen

    while(i<j)
    {
        k=0;
        
        if(arr[i]==arr[j])
        {
            i++;
            j--;
            k=1;
            continue;
        }
        else
        {
            printf("Given string is not palindrome");
            break;
        }
    }
    if(k==1)
    {
        printf("Given string is palindrome");
    }

}