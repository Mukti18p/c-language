#include<stdio.h>

int main()
{
    float ct,ft;
    int choice;
    printf("1 st choice is to covert temp into ces\n");
    printf("The 2nd choice is to convert temp into ft\n");
    scanf("%d\n",&choice);
    if(choice == 1)
    {
        scanf("%f\n",&ft);
        printf("The temp in ft : %f\n",ct=(ft-32)/1.8);

    }
    else
    {
        scanf("%f\n",&ct);
        printf("The temp in ct:%f\n",ft = 1.8*ct + 32);
    }





    return 0;
}
