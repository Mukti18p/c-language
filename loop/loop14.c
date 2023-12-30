#include<stdio.h>

int main()
{
    int i,j,a=1,k;

    for(i=1;i<=3;i++)
    {
        for(k=0;k<=3-i;k++)
        {
            printf(" ");
        }
        if(i==1)
        {
            printf("%d",a);
        }
        else
        {
            for(j=1;j<=i+(i-1);j++)
            {

            if(j==1 ||j==i+(i-1))
            {
                printf("%d",a);
            }
            else if(j==2)
            {
                printf("%d",a+1);
            }
            else
            {
                printf("%d",a+2);
            }
            }
        }
        printf("\n");
    }
}
//niche ni rit best che

//int i,j,n;
  // printf("Input number of rows : ");
  // scanf("%d",&n);
  // for(i=0;i<=n;i++)
  // {
    // /* print blank spaces */
    // for(j=1;j<=n-i;j++)
	//printf(" ");
     /* Display number in ascending order upto middle*/
    // for(j=1;j<=i;j++)
       printf("%d",j);
 //
     /* Display  number in reverse order after middle */
       for(j=i-1;j>=1;j--)
	 // printf("%d",j);

   //  printf("\n");
  // }
//}
