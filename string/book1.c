#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k=0;
    int r;int temp;

    char arr[100];
    gets(arr);
    char brr[100];
    gets(brr);
    char crr[200];
    int le;
    le=strlen(arr);
    int le1;
    le1=strlen(brr);
    int count;

    for(i=0,j=0;arr[i]!='\0',brr[j]!='\0';i++,j++)
    {
       
        if(arr[i]!=brr[j])
        {
            count=1;
        }
        else{
            count=0;
        }
          
    }
    if(count==1)
    {
        for(i=0;arr[i]!='\0';i++)
        {
                crr[k]=arr[i];
                k++;
        }
        k=i;
        for(j=0;brr[j]!='\0';j++)
        {
            crr[k]=brr[j];
            k++;
        }
        crr[k]='\0';
        puts(crr);
    printf("length of str1 is %d\n",le);
    printf("length of str2 is %d\n",le1);
    printf("length of str3 is %d\n",k);


    }
    else{
        printf("Two string are equal\n");
    }
   

    
      
}   