#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k=0;
    char arr[100];
    gets(arr);
    int le;
    le=strlen(arr)-1;
    int max=-1,min=1000;int temp=0;int temp1=0;
    int brr[100];int count=0;

    for(i=0;arr[i]!='\0';i++)
    {
        count++;
        if(arr[i]==' ' || i==le)
        {
            brr[k]=count-1;
            printf("%d --\n",brr[k]);
            
            if(max<brr[k])
            {
                max=brr[k];
                if(i-count-2>0)
                {
                    temp=i-count-2;
                }
                else{
                    temp=count-i-2;
                }
                
            }
            if(min>brr[k])
            {
                min=brr[k];
               if(i-count-1>0)
               {
                temp1=i-count-2;
               }
               else{
                temp1=count-i-2;
               }
            if(i==le)
            {
                brr[k]=count;
                if(max<brr[k])
                {
                    max=brr[k];
                    temp=i-count;
                }
                if(min>brr[k])
                {
                    min=brr[k];
                    temp1=i-count;
                }
            }
            }
            k++;
            count=0;
        }
    }
    printf("%d max\n",max);
    printf("%d min\n",min);


}    