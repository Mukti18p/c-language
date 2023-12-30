#include<stdio.h>

int main()
{
    float m1,m2,m3,m4,m5;
    float ag,pr;
    printf("The five sub marks are :");
    scanf("%f:%f:%f:%f:%f\n",&m1,&m2,&m3,&m4,&m5);

    printf("The aggregate marks are %f\n",ag=(m1+m2+m3+m4+m5)/500);

    printf("The pr are %f\n",pr=ag*100);





    return 0;
}
