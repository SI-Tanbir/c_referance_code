//check if its leap year

#include <stdio.h>
int main(){
    int year;
    printf("Enter a year to check, if it's leap year or not?\n");
    scanf("%d",&year);
    if (year % 400 ==0){
        printf("\nLeap year");
    }
    else if(year % 4==0 && year % 100 !=0){
        printf("\nleap year");
    }
    else{
    printf("\nnot leap year");
    }
    // getch();
return 0;
}