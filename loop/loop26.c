#include<stdio.h>
#include<math.h>


int main()
{
    float a=3,n=5,r=2,sum,d,i;

    for(i=1;i<=n;i++)
    {
        d=a*pow(r,(i-1));
        sum=sum+d;
        printf("%f ",d);
    }
    printf("%f ",sum);

}
