#include<stdio.h>

int main()

{
    int i,num,count=02,ctr;
    scanf("%d",&num);

    for(i=2;i<=(num-1);i++)
    {


            if(num%i==0)
            {
                count++;
                break;
            }
            else
            {
                ctr++;
            }

    }
    if(count==0)
    {
       printf("number is prime number");
    }
    else
    {
        printf("The number is not prime");
    }
}
