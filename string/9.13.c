#include<stdio.h>
#include<string.h>

int main()
{
    char arr[100];
    gets(arr);
    char brr[100];
    int m,n,i,j,k=0; 
    scanf("%d",&m); 
    scanf("%d",&n);
    
    
        for(j=n;j<n+m;j++)
        {
            brr[k]=arr[j];
            k++;
        }

    
    brr[k]='\0';
    puts(brr);
}    