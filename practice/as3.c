#include<stdio.h>
int main()
{
    int i,j=0;
    int num;
    int pos=0;
    int neg=0;
    while(pos<10)
    {
        scanf("%d",&num);
        if(num>0)
        {
            pos++;
            j=j+num;
        }
        else
        {
            neg++;
            continue;
        }
    }
    printf("pos %d\n neg %d\n sum %d\n",pos,neg,j);
}