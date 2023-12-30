#include<stdio.h>
#include<string.h>

int main()
{
    int i,j;
    char arr[100];int free[100]={0};
    gets(arr);
    int le = strlen(arr)-1;
    for(int i=0;i<=le;i++)
    {
       int count=0;
        if(free[i]!=1)
        for(int j=0;j<=le;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                free[j]=1;

            }

        }
        if(count!=1 && count!=0)
        {
            printf("%c\n",arr[i]);
        }
    }

}

