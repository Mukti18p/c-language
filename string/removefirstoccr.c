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
            if(count==2)
            {
                for(k=i;k<le;k++)
                {
                    arr[k]=arr[k+1];
                }
                le--;
            }
        }

    }
    printf("remove the first : ");
    arr[le]='\0';
    puts(arr);

    // remove last occr
    
    for(i=count1;i<=le;i++)
    {
        arr[i]=arr[i+1];

    }
    printf("Remove the last occr: ");
    arr[le]='\0';
    puts(arr);
    
    
    
}