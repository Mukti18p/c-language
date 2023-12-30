#include<stdio.h>

int main()
{
    int a,b,c,d,e,M,P,R;
    scanf("%4d",&a);

    b=a%10;
    printf("%d\n",b);

    c=a/10;
    printf("%d\n",M=c%10);

    d=c/10;
    printf("%d\n",P=d%10);

    e=d/10;
    printf("%d\n",R=e%10);
    printf("the sum of this four digit is %d",b+M+P+R);






}
