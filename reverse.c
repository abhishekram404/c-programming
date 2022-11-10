#include <stdio.h>

void main(){
    int number = 1234;
    int rev = 0;

    while (number!=0)
    {
        int last = number % 10;
        rev = rev * 10 + last;
        number = number / 10;
    }
    printf("%d", rev);
    
}