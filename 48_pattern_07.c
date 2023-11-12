/*
  1
 12
123
make this pattern



*/

#include <stdio.h>
    int main(){
        
        
        int n=5;
        for(int col=n;col>=1;col--){
            for(int row=1;row<=n-col;row++){
                printf(" ");
            }
            for(int row=1;row<=col;row++){
                printf("%d",row);//print only start
            }
            printf("\n");
        }

     return 0;} 