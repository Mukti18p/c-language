#include<stdio.h>
#include<string.h>
int swap(int x,int y)
{
    int temp=0;
    temp=x;
    x=y;
    y=temp;
    printf("%d %d",x,y);
    return 0;
}
int main()
{
     int x,y;
     scanf("%d",&x);
     printf("Now enter y :\n");
     scanf("%d",&y);
     printf("Now read str1:\n");
    int i,j,k=0;
    char Master_List[5][10]= {"Admin","Jack","Joseph","Carl","Tom"};
    char str1[100];int count=0;
    scanf("%s",str1);
    for(i=0;i<5;i++)
    {
            if(strcmp(str1,Master_List[i])==0)
            {
                count=1;
                break;
            }
            else{
                count=0;
            }

    }
    if(count==1)
    {
    swap(x,y);
    }
    else{
        printf("Invalid input");
    }
            
}    