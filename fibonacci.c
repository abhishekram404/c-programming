#include <stdio.h>

void main(){
    int i, prev=0, curr=1, temp=0, num=100;



    printf("%d \t",prev);
    printf("%d \t",curr);


    while(temp<num){
          temp = prev + curr;
        prev = curr;
        curr = temp;
        printf("%d \t",temp);
    }


        printf("\n");

}