#include <stdio.h>


void main(){
    int i=1, oddSum=0, evenSum=0;

    while(i<=10){
        if(i%2==0){
            evenSum += i;
        }else{
            oddSum += i;
        }
        i++;
    }

    printf("Odd Sum: %d \nEven Sum:%d\n",oddSum, evenSum);
}
