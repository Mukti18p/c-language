#include <stdio.h>

void main()
{
    int x;
    float y,z,m;

    scanf("%d",&x);

    if(x<=300)
    {
        printf("%d",x*0.70);
    }
    else if(x>300 && x<=600)
    {
        printf("%f",y=300*0.70+(x-300)*0.75);
    }
    else if(x>600 && x<=800)
    {
        printf("%f",z=300*0.70+300*0.75+200+350+(x-600)*0.85);
    }
    else if(x>800)
    {
        printf("%f",m=(300*0.70)+(300*0.75)+200+350+(200*0.85)+500+(x-800));
    }
    return 0;
}
