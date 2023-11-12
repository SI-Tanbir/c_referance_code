/*
//fix by chat gpt
#include <stdio.h>

int main() {
    int num;
    
    while (1) {
        printf("Enter an even number: ");
        scanf("%d", &num);
        
        if (num % 2 != 0) {
            printf("Game over! You have entered an odd number.\n");
            break; // Exit the loop and end the game.
        } else {
            printf("Good job! You have entered an even number.\n");
        }
    }

    return 0;
}


*/

#include <stdio.h>

int main(){
    // we  make input even number game ..
    int num;
    printf("Enter even number:-");
        scanf("%d",&num);
    do{
        if(num % 2 == 0 ){
        printf("Good job !your have entered even number \n Enter another even number:-");
        scanf("%d",&num);}
        else{
        printf("Game over you have entered odd number");
        break;}
        
        
        }while(1);
        
}
 
 
 /*
    int num;
    printf("enter even number:-");
    scanf("%d",&num);

    if(num % 2 !=0){
        printf("Game over you have entered odd number");
    }
    while(num % 2==0){
        printf("Good job !your have entered even number \n Enter another even number:-");
        scanf("%d",&num);
        if(num % 2 !=0){
        printf("Game over you have entered odd number");
        break;
    }

    }

    return 0;
}
 
 */