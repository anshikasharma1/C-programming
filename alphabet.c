// Write a C program to print alphabets from a-z.
#include <stdio.h>

int main()
{
    char ch;
    printf("Alphabets from a - z are: \n");
    for(ch='a'; ch<='z'; ch++)
    {
        printf("%c\n", ch);
    }

    return 0;
}
