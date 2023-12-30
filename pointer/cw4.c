#include<stdio.h>
int main()
{
    int i=0,j=4;
    int temp=0;
    int arr[5];
    for(i=0;i<5;i++)
    {
     scanf("%d",arr+i);
    }
    for(i=0;i<5;i++)
    {
     printf("%d ",*(arr+i));
    }
    printf("\n");
     i=0;
    while(i!=j)
    {
          temp=*(arr+i);
          *(arr+i)=*(arr+j);
          *(arr+j)=temp;
          i++;
          j--;
    }
    for(i=0;i<5;i++)
    {
     printf("%d ",*(arr+i));
    }
}