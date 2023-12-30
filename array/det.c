#include<stdio.h>
#include<limits.h>
int main()
{
     int r,c;int i,j,sum=0,m=0,k=1,l=1,temp=0,t1=0;
     int det=0,det1=0,det3=0;
     int p=0,n=0,f=0,g=0;
     int q=1,y=1,o=1,h=1;
     int e=0;
     int x=0; int ldet=0;
     
    printf("Raws:");
    scanf("%d",&r);
    printf("coloumns:");
    scanf("%d",&c);   
    
    int arr[r][c];
    printf("Enter the elements:");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0
    ;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i!=0 && j!=0)
            {
                m+=1;
                if(m==1 || m==4)
                {
                    temp=arr[i][j];
                    l=temp*l;
                    
                }
                else if(m==3 || m==2)
                {
                    t1=arr[i][j];
                    k=k*t1;
                }
                det = l-k;
            }
            if(i!=0 && j!=1)
            {
                x++;
                if(x==1 || x==4)
                {
                    p=arr[i][j];
                    q=p*q;
                }
                else if(x==3 || x==2)
                {
                    n=arr[i][j];
                    y=y*n;
                }
                det1 = y-q;
            }
            if(i!=0 && j!=2)
            {
                e++;
                if(e==1 || e==4)
                {
                    f=arr[i][j];
                    o=f*o;
                }
                else if(e==3 || e==2)
                {
                g=arr[i][j];
                    h=h*g;
                }
                det3 = o-h;

            }
            
    }
    
    
        }
        det=det*arr[0][0];  det1=det1*arr[0][1]; det3=det3*arr[0][2];

ldet=det+det1+det3;
    printf("\n%d",ldet);
}

