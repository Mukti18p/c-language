#include <stdio.h>
    int main()
    {
         int i,j,k;
         int r;
         scanf("%d",&r);
         int arr[r];int count=0;int fre[r];
         // delete first occurance    // 1 1 1 1 2 2 3 3  // 1 1 1 2 2 3 3
         for(i=0;i<r;i++)
         {
            scanf("%d",&arr[i]);
            fre[i]=-1;

         }
         for(i=0;i<r;i++)
         {
            for(j=i+1;j<r;j++)
            {
               if(arr[i]>arr[j])
               {
                  count=arr[j];
                  arr[j]=arr[i];
                  arr[i]=count;
                  
               }
            }
            printf("%d ",arr[i]);
         }
         printf("\n");
         count=0;
        
         for(i=0;i<r;i++)
         {
            count=0;
            if(fre[i]!=0)
            {
                for(j=i+1;j<r;j++)
                { 
                if(arr[i]==arr[j])
                {
                    count++;
                    fre[j]=0;
                    if(count==2)     
                    {
                        for(k=j;k<r;k++)
                        {
                            arr[k]=arr[k+1];
                        }
                        fre[j]=-1;
                        r--;
                        j=i;
                    }
                }
                
                }
            }
            
        }
         for(i=0;i<r;i++)
         {
            printf("%d ",arr[i]);
         }
    } 