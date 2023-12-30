#include<stdio.h>
int main()
{
    int m=10,*ab=&m;
    printf("m : %d %x\n",*ab,ab);
    m=34;
    printf("change m : %d %x\n",*ab,ab);
    *ab=12;
    printf("change m : %d %x\n",*ab,ab);



}