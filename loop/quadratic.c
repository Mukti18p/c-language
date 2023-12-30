#include<stdio.h>
//-b+d/2a
int main()
{
    float a,b,c;
    float root1,root2,y;

    scanf("%f %f %f",&a,&b,&c);
    y=sqrt(b*b-4*a*c);
    printf("%f",y);
    printf("%f",root1=(-b+y)/(2*a));
    printf("%f",root2=(-b-y)/(2*a));




}
