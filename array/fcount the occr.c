#include<stdio.h>
//my name is mukti patela
char occr(int m,char arr[m])
{
    int i=0,j=0,count=0;int fre[m];
    for(i=0;i<m;i++)
    {
        fre[i]=0;
    }
    for(i=0;i<m;i++)
    {
        count=0;
        if(fre[i]!=1)
        {
        for(j=0;j<m;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                fre[j]=1;
            }
        }
        if(count!=0)
        printf("%c -- %d\n",arr[i],count);
        }
    }


}
int main()
{
    char str[30];
    gets(str);
    occr(30,str);
}