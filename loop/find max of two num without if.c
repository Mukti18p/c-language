#include<stdio.h>

int main()
{
    int a,b,c;
    int m,p,q,r,s;

    scanf("%d %d %d",&a,&b,&c);

    a-b<0?printf("B\n"):printf("A\n");
    b-c<0?printf("C\n"):printf("B\n");
    c-a<0?printf("A\n"):printf("C\n");

    printf("If any alphabat repeats two time then it is bigger than all three values");



    scanf("%d %d %d",&m,&p,&q);
    r = (m>p)?printf("%d\n",m):printf("%d\n",p);
    s = (r>q)?printf("%d\n",r):printf("%d\n",q);
    printf("%d",s);












}


