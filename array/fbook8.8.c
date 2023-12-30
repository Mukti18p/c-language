#include<stdio.h>
void read(int m,int brr[m][m])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%3d ",brr[i][j]);
        }
        printf("\n");
    }
    return ;

}
void mat(int m,int brr[m][m])
{
    int i=0,j=0;
    for(i=0;i<5;i++)
    {
        
      
       for(j=i+1;j<5;j++)
       {
         brr[i][j]=1;
       }
       for(j=0;j<i;j++)
       {
            if(j>=0)
            {
                brr[i][j]=-1;
            }
       }
         for(j=0;j<5;j++)
       {
           if(i==j)
           {
                brr[i][j]=0;
           }
       }

    }
    read(m,brr);
    return ;

}
int main(){
    int m=5;
    int arr[m][m];
    mat(m,arr);
}