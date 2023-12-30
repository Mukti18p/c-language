#include<stdio.h>

int main()
{
        char a = 'A';
        int b = '0' + 11 ;

        // if i write int b = A then it present error while compiling it so if you write some char in int so it must be have '' single quote.
        /* when u add char x and int y then you print the value in terms of "%c", x + y  then the output will be in the range of 0-127.
        if you put char a = 'A' + 'B' and int x=5;(%c, a+x) then the output is garbage value.. "the same situation in int are also not valid.. expect int = '1'+ 23 is valid" addition of two letters in char is not valid.
        if you write 1.  int a = 0 & 2.  int a = 'a' & char x = '0' in the first case x+a will be 48 + 0 and in the 2nd 48 + 97
        in the int we took both value of 0 and '0'... but in char we took 0-9 and alphabates with single quotes
        if the addition of the char and int will define in float the output will generate as expected ....  not only for addition it is also possible in substraction , multiplication , division

             */
        float y;
        printf("%f",y = a*b);






        return 0;


}



