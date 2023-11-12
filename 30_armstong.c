// we make armstrong means curve sqare of those number and summation of those number
#include <stdio.h>
int main(){
    int armstrong,rem;
    int digit=153;
    int orginal=digit;
    while(digit!=0){
        rem=digit%10;
        armstrong=armstrong + rem*rem*rem;
        digit=digit/10;
    }
    if (orginal == armstrong){
        printf("%d is armstrong number;",armstrong);
    }
    else{
        printf("%d is not armstrong number",armstrong);
    }
return 0;
}