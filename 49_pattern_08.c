/*
  1
 12
123
 12
  1  
*/

// make this pattern
#include <stdio.h>
    int main(){
        int n=3;

        for(int col=1;col<=n;col++){

            for(int row=1;row<=n-col;row++){
                printf(" ");
            }
            for(int i=1;i<=col;i++){
                printf("%d",i);
            }

            printf("\n");
        }

        for(int col=1;col<=2;col++){

            for(int i=1;i<=col;i++ ){
                printf(" ");
            }
            for(int l=1, k=2;k>=col;k--){
                printf("%d",l);
                l++;
            }
            printf("\n");
        }
        
     return 0;} 