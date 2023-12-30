#include<stdio.h>

int main()
{
    int call;
    float bill;

    scanf("%d\n",&call);

    if(call<=100)
        printf("The bill is 250\n");
    else if(call>100)
        printf("The bill is %f",bill=250 + 1.50*call);
}
