#include <stdio.h>

// a program to find factorial of given number using loop

void main(){
    int a;
    printf("Enter the  number for which you want to calculate factorial: ");
    scanf("%d", &a);
    int fact = 1;

    while(a!=1){
        fact *= a;
        a--;
    }

    printf("%d\n", fact);

}