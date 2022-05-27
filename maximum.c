// Write a C program to find maximum between two number using switch case.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    switch(a>b)
    {
        case 1:
        printf("%d is greater than %d",a,b);
        break;
        
        case 0:
    
        switch(b>a)
        {
        case 1:
        printf("%d is greater than %d",b,a);
        break;
        
        case 0:
        printf("Both are equal");
        break;
        }
    } 
    return 0;
}
