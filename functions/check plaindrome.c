#include <stdio.h>
#include <string.h>
 
void check(char [], int);
 
int main()
{
    char word[15];
 
    scanf("%s", word);
    check(word, 0);
 
    return 0;
}
void check(char word[], int index)
{
    int len = strlen(word) - (index + 1);
    if (word[index] == word[len])
    {
        if (index + 1 == len || index == len)
        {
            printf(" palindrome\n");
            return;
        }
        check(word, index + 1);
    }
    else
    {
        printf("not palindrome\n");
    }
}