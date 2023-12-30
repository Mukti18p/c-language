#include<stdio.h>
struct stud
{
   char name[20];
   int chem;
   int maths;
   int phy;

}st[3];
int main()
{
    st[0]={"Mukti",67,97,81};
    st[1]={"Diya",78,89,97};
    st[2]={"Khushi",89,90,91};

    int brr[3];
    int crr[3];
    int sum=0;
    for(int i=0;i<3;i++)
    {
        brr[i]=st[i].chem+st[i].maths+st[i].phy;
    }
    printf("total marks studentwise:\n");
    for(int i=0;i<3;i++)
    {
        printf("%d\n",brr[i]);
    }
    for(int i=0;i<3;i++)
    {
        crr[0]=crr[0]+st[i].chem;
        crr[1]=crr[1]+st[i].maths;
        crr[2]=crr[2]+st[i].phy;
    }
     printf("total marks subjectwise:\n");
    for(int i=0;i<3;i++)
    {
        printf("%d\n",crr[i]);
    }

}