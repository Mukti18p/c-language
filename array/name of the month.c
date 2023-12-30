#include<stdio.h>
#include<string.h>
int month(int m)
{
    switch(m)
    {
        case 1:
        printf("January");
        break;
         case 2:
        printf("Feb");
        break;
         case 3:
        printf("March");
        break;
         case 4:
        printf("April");
        break;
         case 5:
        printf("May");
        break;
         case 6:
        printf("June");
        break;
         case 7:
        printf("July");
        break;
         case 8:
        printf("August");
        break;
         case 9:
        printf("Sep");
        break;
         case 10:
        printf("Oct");
        break;
         case 11:
        printf("Nov");
        break;
         case 12:
        printf("Dec");
        break;
        default :
        printf("You enter wrong input");
    }
    return 0;
}    
int main()
{
    int m;
    scanf("%d",&m);
    month(m);
}