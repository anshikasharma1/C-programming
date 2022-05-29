// Write a C program to swap two arrays using pointers.
#include<stdio.h>  
void swap(int*, int*);  
int main()  
{  
    int a, b;  
    printf("Enter values for a and b\n");  
    scanf("%d%d", &a, &b);  
    printf("\n\nBefore swapping: a = %d and b = %d", a, b);  
    swap(&a, &b);  
    printf("\nAfter swapping: a = %d and b = %d", a, b);  
   return 0;  
}  
  
void swap(int *x, int *y)  
{  
    int temp;  
  
    temp = *x;  
    *x   = *y;  
    *y   = temp;  
}  
