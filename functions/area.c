#include<stdio.h>
float areac(int r)
{
    return 3.14*r*r;
}
float areat(int b,int h ,float area)
{
    return ((float) 1/2)*b*h;
}
int main()
{
    int b,h;
    float area;
    scanf("%d%d",&b,&h);
    printf("%f\n",areat(b,h,area));
    int r;
    scanf("%d",&r);
    printf("%f",areac(r));

}