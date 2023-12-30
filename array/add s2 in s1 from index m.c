#include<stdio.h>
#include<string.h>
int locate(char str[],char str1[],int m)
{
    int i,j,k,n,temp;
    temp=m;
    for(i=0,j=0;str1[i]!='\0',str[j]!='\0';i++,j++)
    {}
    i++;j++;
    for(n=0;n<i;n++)
    {
        for(k=j;k>=m;k--)
        {
            str[k+1]=str[k];
        }
        m++;
    }
    k=0;
    for(n=temp;n<j;n++)
    {
        str[n]=str1[k];
        k++;
    }
    str[n]='\0';
    puts(str);
    puts(str1);
}
int main()
{
   char str[100]="Helloworld";
   char str1[100]="Bbbyee";
   int m;
   scanf("%d",&m);

   locate(str,str1,m);
}