// we will check where 
#include <stdio.h>
int main(){
    int data;
    printf("Enter character:");
    scanf("%c",&data);

    if (data >=65 && data <=90){
        printf("Capital letter\n");

    }
    else if(data >=97 && data <=122 ){
        printf("Lower letter\n");
    }
    else{
        printf("Invalid numbers\n\n");
    }
return 0;
}