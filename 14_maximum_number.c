// maximum number in 3 number

#include <stdio.h>
int main(){

    int n1,n2,n3;
    printf("Enter 3 numbers:");
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n2 && n1>n3){
        printf("%d is bigger numbers",n1);

    }
    else if(n2>n1 && n2>n3){
        printf("%d is bigger numbers",n2);
    }
    else if(n3>n1 && n3>n1){
        printf("%d is bigger numbers",n3);
    }
    else{
        printf("All the number are equil");
    }
return 0;
}