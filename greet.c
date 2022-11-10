#include <stdio.h>

// WAP to input values from user and display it
void greet(){
    char firstName[20];
    int age;
    float weight;

    // input firstName
    printf("Enter your first name: ");
    fgets(firstName, sizeof(firstName), stdin);

    // input age
    printf("Enter your age: ");
    scanf("%d", &age);

    // input weight
    printf("Enter your weight: ");
    scanf("%f", &weight);

    // print the inputs
    printf("\nHello, your name is ");
    puts(firstName);
    printf(" and you are %d years old. Your weight is %.2f",  age, weight);
}






// WAP to reproduce error while reassigning to constant variable in C
// void main(){
//     const float PI = 3.14;

//     // reproduces error
//    // PI = 3.1416;
// }