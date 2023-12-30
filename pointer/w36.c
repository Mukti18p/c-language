#include<stdio.h>
int m1(int *p1,int *p2)
{
    if(*p1 > *p2)
    {
        printf("%d is greater then %d",*p1,*p2);
    }
    else{
         printf("%d is greater then %d",*p2,*p1);
    }
}
int main()
{
    int a=10,b=12;
    int *p1=&a;
    int *p2=&b;
    m1(p1,p2);

}