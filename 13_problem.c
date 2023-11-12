//amake print korte hobe 10 --100 er mondde joto odd number ace;

#include <stdio.h>

int main(){
    int i,odd;
    for (i=10;i<=100;i++){

        if(i % 2 != 0){
            printf("The odd number list-:%d\n",i);
        }

    }
    return 0;
}