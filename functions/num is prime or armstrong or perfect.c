#include<stdio.h>
int fact(int t)
{   
    int fact;
    fact=t*t*t;
    
    return  fact;
}
int armstrong(int i)
{   int temp=i;
    int sum=0;int t=0;
    while(i!=0)
    {
        t=i%10;
        sum=sum+fact(t);
        i=i/10;
    }
    if(temp==sum)
    {
        printf("This num is armstrong number");
    }
    else
    {
        printf("This number is not perfect ,armstrong,prime\n");
    }
    return 0;
}
int perfect(int i)
{
    int sum=0;
    for(int j=1;j<i;j++)
    {
        if(i%j==0)
        {
            sum=sum+j;
        }
    }
    (sum==i)?printf("The number is perfect number"):armstrong(i);
    return 0;
}
int prime(int i)
{
    int count=0;
    for(int j=2;j<i/2;j++)
    {
        if(i%j==0 && i!=j)
        {
            count=0;
            perfect(i);
            break;
        }
        else
        {
            count=1;
        }
    }
    if(count==1)
    {
        printf("Number is prime");
    }
   return 0;
  
}
int main()
{
  int i,j;
  scanf("%d",&i);
  prime(i);
  return 0;
}