#include <stdio.h> 
 
struct st
{
  int s1;
  int s2;
  int s3;
  int total;
};
int main()
{
  int i,j=0,n;
  scanf("%d",&n);
  struct st *p,*r,a[n],b[3];
  p=a;
  r=a;
  for(i=0;i<n;i++)
  {
    scanf("%d%d%d",&p->s1,&p->s2,&p->s3);
  
    p++;
    
  }
  p=r;
  for(i=0;i<n;i++)
  {
       p->total = p->s1 + p->s2 + p->s3;
    p++;
  }

  p=r;
  for(i=0;i<n;i++)
  {
    b[j].total += p->s1;
  
  }
    p++;
  j++;
  for(i=0;i<n;i++)
  {
    b[j].total += p->s2;
    
   
  }
  j++;
    p++;
  for(i=0;i<n;i++)
  {
    b[j].total += p->s3;

  }
  j++;
    p++;
  p=r;
  for(i=0;i<n;i++)
  {
    printf("%d\n",p->total);
  }
  j=0;
  printf("hello\n");
  for(i=0;i<3;i++)
  {
    printf("%d\n",b[j].total);
    j++;
  }



}