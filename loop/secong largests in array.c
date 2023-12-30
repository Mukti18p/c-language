#include <stdio.h>
int main()
{
    int max=-1,smax,i,arr[7]={1,2,3,7,6,4};

    for(i=0;i<7;i++)
    {
        if(max<arr[i])
        {
            smax=max; //previous max store
            max=arr[i];//new max store
        }
        else if(smax<arr[i] && max!=arr[i])
        {
            smax=arr[i];
        }
    }
    printf("%d %d",smax,max);
}
