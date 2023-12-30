#include<stdio.h>
// 1 2 3 4 pos-1 
int main()
{
    int i,j,r;
    int ele;int pos;
    scanf("%d",&r);
    int arr[r];

    for(i=0;i<r;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the element:");
    scanf("%d",&ele);
    printf("Enter the position:");
    scanf("%d",&pos);

    for(i=r-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    r++;
    arr[pos-1]=ele;
// 1 2 3 4 5  p 3 el 25 // 1 2 3 3 4 5   r`=6   1 2 25 3 4 5  0 1 2 3 4 5
    for(i=0;i<r;i++)
    {
        printf("%d ",arr[i]);
    }
    

}