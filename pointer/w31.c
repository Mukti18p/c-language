#include<stdio.h>
int main()
{
    int m,*z=&m;
    int n,o;
    m=10;
    printf("%x is the address od m\n",z);
    printf("value of m is %d\n",*z);
    printf("address of z is %x  and %x\n",&z,&m);
    printf("%x is the add of n\n",&n);
    printf("%x is the add of o\n",&o);

}