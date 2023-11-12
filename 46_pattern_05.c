// i will make this pattern 

/*
1
12
123
12
1

i will just use ascii value to use 
A
AB
ABC
AB
A
LIKE THAT

*/

#include <stdio.h>
    int main(){
        for (int i=1;i<=3;i++){
            for(int j=1;j<=i;j++){
                printf("%c",64+j);
            }
            printf("\n");
        }

        for (int k=2;k>=1;k--){
            for(int l=1;l<=k;l++){
                printf("%c",64+l);
            }
            printf("\n");
        }

     return 0;}