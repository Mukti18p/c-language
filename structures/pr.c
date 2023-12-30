#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n=100,k=0;float temp=0,t=-1;
    float a[n];
    int flag[n];
    int count[n];
    int max=-1,index=0;
    int occr=0;
    int i=0,j;
    int m=1;
    float mean=0,med=0;
    while(1)
    {
        scanf("%f ",&a[i]);
        if(a[i]==-1)
            break;
        flag[i]=-1;
        i++;
    
    }
    n=i;
    for(i=0;i<n;i++)
    {
        mean+=a[i];
    }
    mean=mean/(n);
    printf("%0.2f ",mean);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    if(n==1)
    {
        med=1;
    }
    else if(n%2==0)
    {
        med=(a[n/2] +a[(n/2)-1])/2.0;
    }
    else
    {
        med=(a[(n)/2]);
    }
    printf("%0.2f ",med);
    for(i=0;i<n;i++)
    {
        occr=0;
        if(flag[i]==-1)
        {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                flag[j]=0;
                occr++;
            }
        }
            count[i]=occr;
            if(max<count[i])
            {
                max=count[i];
                index=i;
                
            }
            }
        }
       for(i=0;i<n;i++)
    {
        if(max==count[i])
        {
            k++;
        }
    }
    if(max==1 && k==1)
    {
        printf("%0.2f ",a[0]);
    }
    else if(max==0 && k==1){
        printf("%0.2f ",t);
    }
    else if(max > 0 && k==1)
    {
        printf("%0.2f ",a[index]);
    }
    else
    {
        printf("%0.2f ",m);
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    