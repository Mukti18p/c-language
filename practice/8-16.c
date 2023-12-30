#include<stdio.h>
int main(){
    int i,j;
    int a[3][3],*ptr=&a[0][0];
    int b[3]={0},*p=&b[0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",ptr+3*i+j);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           *(p+i) += *(ptr+3*i+j);
        }
        printf("%d ",*(p+i));
    }

}