#include<stdio.h>

int main()
{
    float l,r,c,x,y;
    scanf("%f %f %f\n",&l,&r,&c);

    x=(1/(l*c)-(r*r)/(4*c*c));

    printf("%f\n",x);

    y=sqrt(x);

    printf("%f",y);




}
