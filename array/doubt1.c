#include<stdio.h>
#include<string.h>
int main()
{
   char string[]="mukti patel prakashbhai";
 
   char str1[100];

   int i,j;int m;int n;
   scanf("%d",&m);
   scanf("%d",&n);
   int k;
   int le=strlen(string)-1;
   for(i=n;i<=m+n;i++)
   {
        str1[k]=string[i];
        k++;
   }
   puts(str1);
}

