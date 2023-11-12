#include <stdio.h>

int main(){
    //keep taking input until the user input a number multipy by 7
    int num; 
    do{
        printf("Enter number:-");
        scanf("%d",&num);
        if (num % 7 ==0){
            break;
        }
    }while (1);
    
    
    return 0;
}