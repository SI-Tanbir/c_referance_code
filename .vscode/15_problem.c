#include <stdio.h>

int main(){
    //print the factorial of number input is given by user
    int num=1,mul=1;
    printf("Give the the factorial number:-");
    scanf("%d",&num);

    for(num;num>=1;num--){
        mul=num*mul;
        
    }
    printf("factorials :%d",mul);
    return 0;
}