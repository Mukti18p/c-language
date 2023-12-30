#include <stdio.h>
    int main()
    {
         int i,j,k;
         int r;
         scanf("%d",&r);
         int arr[r];int count=0;
         // delete all occurance ,first,second,third // 1 1 1 2 2 3 3  // 1 2 2 1 3 1 3
         for(i=0;i<r;i++)
         {
            scanf("%d",&arr[i]);
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
            printf("%d ",arr[i]);
         }
    }        