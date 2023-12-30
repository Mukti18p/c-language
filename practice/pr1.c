#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b;
    scanf("%d%d",&a,&b);
    int *ptr=&a;
    int fact=1,sum=0,temp=0,m=0;
    while(*ptr != b)
    {
        sum=0;
        fact=1;
        m=0;
        temp=*ptr;
        while(temp != 0)
        {
            m=temp%10;
            temp=temp/10;
            while(m != 1)
            {
                fact = fact * m;
                m--;
            }
            sum=sum+fact;
        }
        *ptr=temp;
       
        if(sum == *ptr)
        {
            printf("%d",*ptr);
        }
         *ptr = *ptr +1;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
