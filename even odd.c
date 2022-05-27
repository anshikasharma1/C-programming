// Write a C program to check weather a number is even or odd using switch case.
#include<stdio.h>
int main(){
    int a;
    printf("Enter value of a:");
    scanf("%d",&a);
    switch(a>0)
    {
        case 1:
        printf("Number is positive");
        break;
        
        case 0:
        
        switch(a<0)
        {
            case 1:
            printf("Number is negative");
            break;
            
            case 0:
            printf("Zero");
            break;
        }
    }
    return 0;
}

