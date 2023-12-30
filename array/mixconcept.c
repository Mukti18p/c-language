#include<stdio.h>
#include<string.h>
int add(char str[],char str1[])
{
    int i,j,k=0,count;
    for(i=0;str[i]!='\0';i++)
    {count=i;}
    for(j=count+1;str1[k]!='\0';j++)
    {
        str[j]=str1[k];
        k++;
    }
    str[j]='\0';
    puts(str);
    return 0;

}
int cmp(char str[],char str1[])
{
    int i,j=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=str1[i])
        {
            j=1;
            printf("Given string are not equal\n");
            break;
        }
    }
    if(j==0)
    printf("Given string are equal\n");
    return 0;
}
int copy(char str[],char str1[])
{
    int i;
    for( i=0;str1[i]!='\0';i++)
    {
        str[i]=str1[i];
    } 
    str[i]='\0';
    puts(str);
    puts(str1); 
    return 0; 
}    
int main()
{
    int le,le1;
    char str[100]="Hello";
    char str1[100]="Worldd";

    copy(str,str1);
    cmp(str,str1);
    add(str,str1);


}