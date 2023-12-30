#include <stdio.h>
int main()
{
    // 1 1 3 3 3 2    1 occurs 2 time ,  3 occurs 3 time ,2 occurs 1 time 
	int r;int i,j; int occr=1;
    printf("enter the raws");
    scanf("%d",&r);
	int arr[r]; int fre[100];

    for(i=0;i<r;i++)
    {
        scanf("%d",&arr[i]);
        fre[i]=1;
    }
    for(i=0;i<r;i++)
    {
        for(j=i+1;j<r;j++)
        {
            occr=1;
            if(fre[j]!=0)
            {
                if(arr[i]==arr[j])
                {
                    occr++;
                }
            }
        }
        if(occr%2==1)
        {
            printf("%d num occurs %d times",arr[i],occr);
        }
    }

}

	// 1 1 3 3 3 2  1 - 2   3 - 3   2-1