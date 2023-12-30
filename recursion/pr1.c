#include<stdio.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i=0,j=0,k=0;
    int r;
    printf("R");
    scanf("%d",&r);
    int arr[r];
    printf("M");
    for(i=0;i<r;i++)
    {
        scanf("%d ",&arr[i]);
    }  // 1 2 3 2 2 5
    for(i=0;i<r;i++)
    {
      
            for(j=i+1;j<r;j++)
            {
                if(arr[i]==arr[j])
                {
                    for(k=j;k<r;k++)
                    {
                        arr[k]=arr[k+1];
                    }
                    r--;
                    j=i;
                }
            }     
            
    }
    for(i=0;i<r;i++)
    {
        printf("%d\n",arr[i]);
    }
    
    
    return 0;
}
