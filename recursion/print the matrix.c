#include<stdio.h>
void array(int arr1[],int index,int n)
{
    if(index>=n)
    {
        return;
    }
    printf("%d ",arr1[index]);
    array(arr1,index+1,n);
}
int main()
{
    int i,j;
    scanf("%d",&j);
    int arr[100];
    for(i=0;i<j;i++)
    {
        scanf("%d",&arr[i]);
    }
    array(arr,0,j);
    return 0;
}