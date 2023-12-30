#include<stdio.h>

int main()

{
    int i,j;int r;int c;int k;
    printf("ENter the first array raw:");
    scanf("%d",&r);
    printf("enter the second array raw:");
    scanf("%d",&c);
    int arr[r];int brr[c];int crr[r+c];

    
    printf("Enter the elements:");
    for(i=0;i<r;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the second array elements:");
    for(j=0;j<c;j++)
    {
        scanf("%d",&brr[j]);
    }
    i=0;
    j=0;
    for(k=0;k<r+c;k++)  // 10 11 12 13 14 15 16 17  
    {
        if(k%2==0)
        {
            crr[k]=arr[i];
            i++;
        }
        else
        {
            crr[k]=brr[j];
            j++;
        }
    }
    for(i=0;i<r+c;i++)
    {
        printf("%d\n",crr[i]);
    }
}