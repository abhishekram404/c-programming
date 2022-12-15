#include <stdio.h>


int checkPrime();

void main(){

    while(1){
        checkPrime();
    }
    
}


int checkPrime(){
    int i, num, div=0;

    printf("Enter the number which you want to check for prime: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++){
        
        if(num%i==0){
            div++;
        }
    }

    if(div==2){
        printf("%d is a prime number.\n");
    }else{
        printf("%d is a not prime number.\n");

    }
}










































