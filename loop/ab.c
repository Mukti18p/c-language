#include<stdio.h>

int main()
{
    int a=3;
    unsigned int x=4*1024;
    int b= ++a + a++ + --a;
    printf("%d\n\t",b);
    printf("%d\n",x);
    x=x*1024;
    printf("%d\n");
    if(x>0)
    {
        printf("T\n",x);

    }
    else
    {
        printf("%d\n",x);
    }
    

}
