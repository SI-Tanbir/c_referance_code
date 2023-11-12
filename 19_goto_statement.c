#include <stdio.h>
int main(){
    int i=0;
    fuck:// defineing label it and naming it fuck;
        printf("%d\t",i);
        i++;


    if (i<5){
        goto fuck; //call a label with goto statement
    }
return 0;
}