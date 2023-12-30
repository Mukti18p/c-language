#include<stdio.h>
#include<string.h>
int main()
{
   int i=0,j=0;
   

   char arr[100]; char brr[100];
   printf("Enter the string 1 :");
   gets(arr);
   printf("Enter the string 2:");
   gets(brr);
  
   int count=0;
   
   for(i=0;arr[i]!='\0';i++)
   {
        count++;
        
   }
   for(j=0;brr[j]!='\0';j++)
   {
        arr[count]=brr[j];
        count++;
   }
   arr[count]='\0';
   puts(arr);

}