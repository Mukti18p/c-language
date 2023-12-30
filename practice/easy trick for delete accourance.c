#include<stdio.h>
#include<string.h>
//hhello world hello hi bye hello
//hello
int main()
{
    int arr[10];
    int i,j,k;
    int le=9;int count=1;
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=le;i++)
    {
        count=1;
        for(j=i+1;j<=le;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                if(count==3)
                {
                for(k=j;k<=le;k++)
                {
                    arr[k]=arr[k+1];
                }
                le--;
                j=i;
                }
            }
        }
    }
    for(i=0;i<=le;i++)
    {
        printf("%d ",arr[i]);
    }
}   