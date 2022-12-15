#include <stdio.h>

void main(){
    int leap = 0, year;
    printf("Enter the year to check: ");
    scanf("%d",&year);

    if(year%400==0 || (year%4==0 && year%100 !=0)){
       printf("Year %d is leap year.\n", year);
    }else{

       printf("Year %d is not leap year.\n", year);
    }



}