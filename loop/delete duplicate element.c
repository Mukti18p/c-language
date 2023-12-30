#include <stdio.h>

int main()
{
    int arr[100];
    int i,j,k;
    int size;
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])

            {
                size--;
                for(k=j;k<size;k++)
                {
                    arr[k]=arr[k+1];

                }

            }
        }

    }
    for(i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }

}

