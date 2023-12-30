#include<stdio.h>//1 to 100
int armstrong(int x,int y)
{   int i;
    for(i=x;i!=y;i++)
    {  
    int temp=i;
    int sum=0;int t=0;
    while(i!=0)
    {
        t=i%10;
        sum=sum+t*t*t;
        i=i/10;
    }
    if(temp==sum)
    {
        printf("%d\n",temp);
    }
    else{
        continue;
    }
    }
    return 0;
}
int main()
{
       int x,y;
       scanf("%d",&x);
       scanf("%d",&y);
       armstrong(x,y);
       return 0;

}    