//we will make a greading evaluating system in bd
#include <stdio.h>
int main(){
    int mark;
    printf("Enter number:\n\n");
    scanf("%d",&mark);
    if (mark>= 80){
        printf("GPA-A+");
    }
    

    else if (mark>= 70 && mark <=79){
        printf("GPA-A");
    }
    

    else if (mark>= 60 && mark <=69){
        printf("GPA-A-");
    }
    

    else if (mark>= 50 && mark <=59){
        printf("GPA-B");
    }
    

    else if (mark>= 40 && mark <=49){
        printf("GPA-C");
    }
    

    else if (mark>= 33 && mark <=39){
        printf("GPA-D");
    }
    

    else{

        printf("Fail");
    }
    


return 0;
}