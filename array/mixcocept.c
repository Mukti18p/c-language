#include<stdio.h>
void print(int n,int arr[n])
{
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
}
void merge(int n,int arr[5],int brr[5],int crr[10])
{
    int i,j,k=0;
    for(i=0;i<5;i++)
    {
        crr[i]=arr[i];
    }
    for(j=5;j<10;j++)
    {
        crr[j]=brr[k];
        k++;
    }
    return;
}
int sort(int n,int arr[n])
{
    int i=0,j=0,temp=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
            }
        }
    }

    return 0;
}
int main()
{
    int arr[5]={23,12,34,1,67};
    int brr[5]={14,65,89,23,56};
    int crr[10];
    sort(5,arr);
    sort(5,brr);
    merge(10,arr,brr,crr);
    sort(10,crr);
   print(10,crr);


}