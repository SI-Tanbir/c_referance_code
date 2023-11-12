//print the number 1 t0 1000 expect  those number which are multiply by 9 dont take them

#include <stdio.h>

int main(){
    for (int i=1;i<=1000;i++){

        if(i % 9 != 0){
            //IT will take only print the number which are not devided by9
            printf("%d\n",i);

        }
    }
    return 0;
}