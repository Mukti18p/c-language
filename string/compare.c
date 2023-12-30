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
   
   while(arr[i]!='\0' && brr[i]!='\0' && arr[i]==brr[i] )
   {
        
        i++;
   }
   
   if(arr[i]=='\0' && brr[i]=='\0')
   {
        printf("\nboth string are equal");
   }
   else
   {
        printf("Not equal");
   } 

}