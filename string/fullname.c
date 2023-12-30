#include<stdio.h>
#include<string.h>

int main()
{
    int i=0,j=0,k=0;
    char fname[100]="MUKTI";
    char mname[100]="PATEL";
    char lname[100]="PRAKASHBHAI";
    char full[300];

    for(i=0;fname[i]!='\0';i++)
    {
        full[i]=fname[i];
    }
    full[i]=' ';
    for(j=0;mname[j]!='\0';j++)
    {
        full[i+1+j]=mname[j];
    }
    full[i+1+j]=' ';
    for(k=0;lname[k]!='\0';k++)
    {
        full[i+2+j+k]=lname[k];
    }
    full[i+2+j+k]='\0';
    puts(full);


}    