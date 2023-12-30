#include<stdio.h>

int main()
{
    int secs,ts;
    int h,min,s;

    printf("The secs are :");
    scanf("%d\n",&secs);
    ts = secs;
    h = ts/3600;
    ts = ts%360;
    min = ts/30;
    ts = ts%30;
    s = ts;
    printf("%d:%d:%d\n",h,min,s);
    return 0;

}

