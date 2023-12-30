#include<stdio.h>
#include<string.h>
int main()
{
       int i,j;
       int value[50];int low;int high;
       int group[11]={0,0,0,0,0,0,0,0,0,0,0};

       for(i=0;i<50;i++)
       {
        scanf("%d",&value[i]);
        ++group[(int)value[i]/10];
       }
       for(i=0;i<11;i++)
       {
            low=10*i;
            if(i==10)
            {
                high=100;
            }
            else{
                high=low+9;
            }
            printf("%d  %d  to  %d  %d\n",i+1,low,high,group[i]);
       }
}    





