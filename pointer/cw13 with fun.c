#include <stdio.h>
#include<string.h>
#define MAX_SIZE 100 


int compare(char * str1, char * str2);


int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int res;

    
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);


    res = compare(str1, str2);

    if(res == 0)
    {
        printf("Both strings are equal.");
    }
    else if(res < 0)
    {
        printf("First string is lexicographically smaller than second.");
    }
    else
    {
        printf("First string is lexicographically greater than second.");
    }

    return 0;
}

int compare(char * str1, char * str2)
{
    while((*str1 && *str2) && (*str1 == *str2)) { str1++; str2++; }

    return *str1 - *str2;
}