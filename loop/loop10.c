#include<stdio.h>

int main()

{
    int a,d1,i,ta,cube=0,y;

    scanf("%d\n",&a);
    scanf("%d\n",&y);
    for(i=a;i<=y;i++)
    {
        ta=i;

       while(i!=0)
       {
           d1=ta%10;
           ta=ta/10;
           cube=cube+d1*d1*d1;
       }
       if(cube==i)
            printf("%d ",i);
    }

}
