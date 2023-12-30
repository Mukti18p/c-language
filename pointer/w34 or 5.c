#include<stdio.h>
int m1(int *m1,int *m2)
{
    return *m1+*m2;
}
int main()
{
    int a=10,b=12;
    int *p1=&a,*p2=&b;
   int z = m1(p1,p2);
   printf("%d is the last value",z);
}   