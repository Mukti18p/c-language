#include<stdio.h>

int main()
{
    int r,c;
    printf("Enter the raws:");
    scanf("%d",&r);
    printf("Enter the colomuns:");
    scanf("%d",&c);
    int arr[r][c];
    int i,j,k,count=0,tne=r*c;
    int minr=0;
    int maxr = r-1;
    int minc = 0;
    int maxc = c-1;
    

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    while(count<tne)
    {
        //printf minr 
        if(count<tne){
            for(j=minc;j<maxc;j++)
            {
                printf("%d ",arr[minr][j]);
                count++;
            }
        }
        minr++;
        if(count<tne){
        //printf maxc 
            for(i=minr;i<=maxr;i++)
            {
                printf("%d ",arr[i][maxc]);
                    count++;
            }
        }
        maxc--;
        if(count<tne){
        //printf maxr
        for(j=maxc;j>=minc;j--)
        {
            printf("%d ",arr[maxr][j]);
            count++;
        }
        }
        maxr--;
        if(count<tne){
        //printf minc
            for(i=maxr;i>=minr;i--)
            {
                printf("%d ",arr[i][minc]);
                            count++;
            }
        }
        minc++;
        if(count>=tne)
        {break;}

    }
}
