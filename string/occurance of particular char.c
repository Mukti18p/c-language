#include<stdio.h>
#include<string.h>
//w3resources  w-1 r - 2 
int main()
{
  char arr[100]; int fre[100]={0};
  gets(arr); int count;
  int le=strlen(arr)-1;
  for(int i=0;i<=le;i++)
  {
    count=0;
    if(fre[i]!=1)
    {
    for(int j=0;j<=le;j++)
    {
        if(arr[i]==arr[j])
        {
            count++;
            fre[j]=1;
        }
    }
    printf("%c    %d\n",arr[i],count);
  }
 
}
}