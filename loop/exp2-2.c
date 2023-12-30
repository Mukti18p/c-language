#include<stdio.h>

int main()
{
    int days,td;
    int m,y,d;

    printf("The days are :");
    scanf("%d\n",&days);
    td = days;
    y = td/360;
    td = td%360;
    m = td/30;
    td = td%30;
    d = td;
    printf("%d:%d:%d\n",y,m,d);

    return 0;
}
