#include<stdio.h>
// i fact / j fact * i-j fact
int fact(int m)
{
    if(m==0 || m==1) return 1;
    else 
    {
        int fact=1;;
        for(int i=m;i>0;i--)
       {
            fact=fact*i;
       }
       return fact;
    }
}
int main()
{
    int i,j;
    int m;
    scanf("%d",&m);

    for(i=0;i<m;i++)
    {
        for(j=0;j<=i;i++)
        {
            if(i-j!=0 || i-j!=i)
            {
            int temp = fact(i)/fact(j)*fact(i-j);
            printf("%d ",temp);
            }
            else
            {
                printf("%d",1);
            }
        }
        printf("\n");
    }

}