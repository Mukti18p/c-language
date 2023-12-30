#include<stdio.h>
#include<string.h>

int main()
{
    int i=0,j=0;
    char arr[100]; char brr[6]={"aeiouAEIOU"};
    gets(arr);
    int count=0;
    int count1=0;
    count1=strlen(arr);

    for(i=0;arr[i]!='\0';i++)
    {
       for(j=0;brr[j]!='\0';j++)
       {
            if(arr[i]==brr[j])
            {
                count++;
            }
       }

    }
    printf("%d",count);
    printf(" %d",count1-count);
   
}