#include<stdio.h>
int main()
{
    int n,m,temp=0;
    scanf("%d%d",&n,&m);
  int a[n],*p=&a[0];
  int b[m],*p1=&b[0];
  int c[n+m],*p2=&c[0];
  int i,j,k=0;
  for(i=0;i<n;i++)
  {
    scanf("%d",p+i);
  }
  for(i=0;i<m;i++)
  {
    scanf("%d",p1+i);
  }
  for(i=0;i<n;i++)
  {
    *(p2+k)=*(p+i);
    k++;
  }
  for(j=0;j<m;j++)
  {
    *(p2+k)=*(p1+j);
    k++;
  }
  for(i=0;i<n+m;i++)
  {
    for(j=i+1;j<n+m;j++)
    {
        if(*(p2+i) > *(p2+j))
        {
            temp=*(p2+i);
            *(p2+i)=*(p2+j);
            *(p2+j)=temp;
        }
    }
  }
  for(i=0;i<m+n;i++)
  {
    printf("%d ",*(p2+i));
  }
}