/* 
 i will make this pattern
 123
 12
 1
 //my prospective if i revese the loop what i learn in previous i can acive it

*/

#include <stdio.h>
    int main(){
        for (int i=3;i>=1;i--){
            for (int j=1;j<=i;j++){
                printf("%d",j%2);
                
            }
            printf("\n");
            
        }
     return 0;}