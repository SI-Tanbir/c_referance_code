//we will practice factorial here 
        /*

        for loop syntax  for better understanding
        
        for (initialization; condition; update) {
    // Code to be executed repeatedly as long as the condition is true
}

        */

#include <stdio.h>
int main(){
    int n, fac;
    printf("Enter numbers:");
    scanf("%d",&n);
    /* here we make this loop run backward 
         to make it realistic*/
    for (n ;n>=1; n--) { 
       fac = fac * n;
    }
    printf("%d ",fac);
return 0;
}