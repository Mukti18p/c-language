#include<stdio.h>
#include<string.h>

int main()
{
    char str[100]="I love codeforwin in programming";
    int le=strlen(str)-1; // olleh
    int j=le;int i=0;int count=0;
    char temp='h';
    while(i<j)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }  
    j=0;
    for(i=0;i<le;i++)
    {
        count++;
        if(str[i]==' ' || str[i]=='\n')
        {
           int t=i-1;
           while(j<t)
           {
              temp=str[j];
              str[j]=str[t];
              str[t]=temp;
              t--;
              j++;  
           }
           count=0;
           j=i+1;
        }
    }
    puts(str);  
}