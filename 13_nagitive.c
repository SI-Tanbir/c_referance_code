//we will calculating nagative and positive numbers
#include <stdio.h>
int main(){
    int n,f;
    
    while (1){//i wanna to make it like stimulation game like continuously asking about if he input
            
        printf("Enter any postive and nagetive numbers:\n");
        scanf("%d",&n);
    
        if (n<0){
            printf("you entered negative number\n");
            
            
        }
        else{
            printf("You entered positive number\n");
        }

    }
return 0;
}