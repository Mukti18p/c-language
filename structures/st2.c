#include<stdio.h>
struct marks
{
    int sub1;
    int sub2;
    int sub3;
    int total;
};

int main()
{
    int i,j=0,n,k=0;
    printf("Enter the number of students :\n");
    scanf("%d",&n);
    struct marks a[n];
    struct  marks t[n];
    struct marks t1[3]={0,0,0};
    for(i=0;i<n;i++)
    {
        scanf("%d\t%d\t%d\t",&a[i].sub1,&a[i].sub2,&a[i].sub3);
       
    }
    for(i=0;i<n;i++)
    {
        t1[j].total += a[i].sub1;
    }
    j++;
    for(i=0;i<3;i++)
    {
        t1[j].total += a[i].sub2;
    }
    j++;
    for(i=0;i<n;i++)
    {
        t1[j].total += a[i].sub3;
    }
    for(i=0;i<n;i++)
    {
        t[i].total = a[i].sub1+a[i].sub2+a[i].sub3;
        printf("[%d] : sub1 = %d \t sub2 = %d \t sub3 = %d \t total stwise = %d\n",i,a[i].sub1,a[i].sub2,a[i].sub3,t[i].total);
    }
    for(i=0;i<3;i++)
    {
        printf("markswise total of %d students [%d] : %d\t ",n,i,t1[i].total);
    }
}