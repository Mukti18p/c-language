 #include <stdio.h> 
 #include<limits.h>
 // 5 6 10 9 13 12 
void main()
{
    int i,j,r;int max=INT_MIN;
    scanf("%d",&r);
    printf("Enter the elements:");
    int arr[r];
    for(i=0;i<r;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<r;i++)
    {
        max=INT_MIN;
        for(j=i+1;j<r;j++)
        {
            if(max<arr[j])
            {   
                max=arr[j];
            }
        }
        printf("The gretest element after %d is %d\n",arr[i],max);
    }
} 