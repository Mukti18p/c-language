#include<stdio.h>

int main()
{
    float km;
    float m,f,is,cm;

    scanf("%f\n",&km);

    m = 1000*km;
    printf("The distance converts in m : %f\n",m);

    f=32840*km;
    printf("The distance converts in feet: %f\n",f);

    is=39370*km;
    printf("The distance converts in inches: %f\n",is);

    cm=1000000*km;
    printf("The distance converts in cm:%f\n",cm);

    printf("%f%:f:%f",m,f,is,cm);



    return 0;
}
