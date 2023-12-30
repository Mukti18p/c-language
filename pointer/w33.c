#include<stdio.h>
int main()
{
    int m=300;
    float fx=300.61;
    char ch='z';
    printf("m : %x\t fx : %x\t ch : %x\n",&m,&fx,&ch);
    int *p1=&m;
    float *p2=&fx;
    char*p3=&ch;
    printf("m : %d\t fx : %f\t ch : %c\n",*(&m),*(&fx),*(&ch));
    printf("With another trick m : %d\t fx : %f\t ch : %c\n",*p1,*p2,*p3);
    printf("m : %x\t fx : %x\t ch : %x\n",p1,p2,p3);

}