#include <stdio.h>
#include <string.h>


void main(){

    int rem; 
    int sum=0;
    int n = 1234;
  

    while (n>0){
        rem = n%10;
        sum = sum + rem;
        n = n/10;
    }

    printf("%d\n", sum);

    
}