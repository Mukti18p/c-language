#include<stdio.h>
#include<string.h>

int main()
{
    int i=0,j=0;
    char arr[100];
    gets(arr);  
    int count=0;char count1;int max=-1;int temp=0;
    for(i=0;arr[i]!='\0';i++)
    {
        count=0;
       for(j=0;arr[j]!='\0';j++)
       {
        if(arr[i]==arr[j])
        {
            count++;
            if(max<count)
            {
                max=count;
                temp=i;
                count1 = arr[i];
            }
       
        }
       }
       
    } 
    printf("%c occuring max num times %d",count1,max);
    
}