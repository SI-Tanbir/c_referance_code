/*
  1
 12
123
make this pattern



*/

#include <stdio.h>
    int main(){
        
        
        int n=5;
        for(int col=1;col<=n;col++){
            for(int row=1;row<=n-col;row++){
                printf(" ");
            }
            for(int row=1;row<=col;row++){
                printf("*");//print only start
            }
            printf("\n");
        }

     return 0;} 