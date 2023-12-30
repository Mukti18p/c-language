#include<stdio.h>

int main()
{
    int i,num,j,count=0;
    scanf("%d",&num);

    for(i=2;i<=(num-1);i++)
    {
        if(num%i!=0)
        {
            break;
        }
        else
        {
            count++;
        }


    }
    if(count==0 && num!=1)
    {
        printf("The number is prime");
    }
    else{
        printf("The number is not prime");
    }
}
