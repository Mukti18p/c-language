#include<stdio.h>
#include<string.h>

int main()
{ //learn programming at codeforwin
    int i=0,j=0,k=0;int temp=0;
    char arr[100];
    gets(arr);
    int le;
    le=strlen(arr); 
    int temp1 = le ;
    for(i=0;i<3;i++)
    {
       temp=temp1-i;
        for(j=temp;j<=le;j++)
        {
            arr[j]=arr[j-1];
        }  
        le--;
    }
    
    arr[le]='\0';
    puts(arr);



}