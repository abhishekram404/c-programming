#include <stdio.h>
#include <math.h>

void main(){
    int num, rem, sum = 0, numCopy;


    printf("Enter the number: ");
    scanf("%d", &num);
    numCopy = num;

    while(num>0){
        rem = num%10;
        sum += rem*rem*rem;
        num=num/10;
        
    }
    if(numCopy==sum){
        printf("%d is armstrong number.\n");
    }else{
        printf("%d is not armstrong number.\n");

    }

    
}