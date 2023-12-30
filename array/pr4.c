#include<stdio.h>
#include<string.h>
void swapping(char **a,char **b)
{
    char *temp=*a;
    *a=*b;
    *b=temp;
}
void sorting(char *a[],int w)
{
     for(int i=0;i<w;i++)
     {
            for(int j=i+1;j<w;j++)
            {
                if(strcmp(a[i],a[j])<0)
                {
                    swapping(&a[i],&a[j]);
                }
            }
     }
     for(int i=0;i<w;i++)
     {
        printf("%s\n",a[i]);
     }
}
int main()
{
    char *str[]={"Banana","apple","appie"};

    sorting(str,3);    
}