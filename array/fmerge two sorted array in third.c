#include<stdio.h>
void merge(int m,int arr[m],int brr[m],int crr[2*m])
{
    int i=0;int k=0;
    for(i=0;i<m;i++)
    {
        crr[i]=arr[i];
    }
    for(i=m;i<2*m;i++)
    {
        crr[i]=brr[k];
        k++;
    }
}
void sort(int m,int arr[m])
{
    int min=100;
    for(int i=0;i<m;i++)
    {
        for(int j=i+1;j<m;j++)
        {
        if(arr[i]>arr[j])
        {
            min=arr[j];
            arr[j]=arr[i];
            arr[i]=min;
        }
        }
    }
    return;

}
int main()
{
    int i,j;
    int m;
    scanf("%d",&m);
    int arr[m];int brr[m];int crr[2*m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&brr[i]);
    }
    sort(m,arr);
    sort(m,brr);
    merge(m,arr,brr,crr);
    sort(2*m,crr);
    for(i=0;i<2*m;i++)
    {
        printf("%d ",crr[i]);
    }
}