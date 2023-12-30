#include<stdio.h>
#include<limits.h>

int main()
{
    int i,j,r,c;
   
    printf("Enter the raw:");
    scanf("%d",&r);
    printf("Enter the coloums:");
    scanf("%d",&c);
    int arr[r][c];
    int brr[c][r];
    int crr[c][r];

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);

        }
    }
    printf("\n");
    
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            brr[j][i]=arr[i][j];
        }
    }
    printf("\n");
    
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            crr[i][r-1-j]=brr[i][j];            
        }
    }
    printf("\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",crr[i][j]);
        }
        printf("\n");
    }    


}

/* 
  0 1 2 3
0 4 5 6 7
1 2 3 4 6
2 1 2 3 9

  0 1 2   0 1 2
0 1 2 4   4 2 1
1 2 3 5   5 3 2
2 3 4 6   6 4 3     for(i=0;i<c;i++)   for(j=0;j<r;j++)
3 9 6 7   7 6 9     crr[i][r-j]=brr[i][j]
column-raw  brr[c][r]
i<c
j<r
20 21 22 23
00 10 20 30
r-0
r-1 -r
r-2 - r-1
r-3 - r-2




  */