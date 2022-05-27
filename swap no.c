// Write a C program to swap the number using bitwise operator.
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter any two numbers:");
    scanf("%d%d", &a, &b);
    printf("Original value of a = %d\n", a);
    printf("Original value of b = %d\n", b);
    a = a^b;
    b = b^a;
    a = a^b;

    printf("a after swapping = %d\n", a);
    printf("b after swapping = %d\n", b);

    return 0;
}
