#include<stdio.h>

int main()
{
    float s;
    float rs,ds,ts;

    printf("Ramesh's basic salary is : ");
    scanf("%f\n",&s);
    printf("Ramesh's basic salary is : %f\n",s);
    rs = 0.4*s;
    printf("Ramesh's rent house salary is %f\n",rs);
    ds = 0.6*s;
    printf("Ramesh's dearness allowness is %f\n",ds);

    ts=rs+ds+s;

    printf("Ramesh's total salary is :%f\n",ts);

    return 0;

}

