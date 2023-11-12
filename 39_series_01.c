//1-2+3-4+5-6----n


#include <stdio.h>

    int main(){
        //write here 
        // we can make some little modify this seris.. see here (1+3+5) .... -(2+4+6)
        int i,l,odd=0,even=0,n=6;
        for(i=1;i<=n;i=i+2){
            odd=odd+i;

        }
        for(l=2;l<=n;l=l+2){
            even=even+i;
        }
        printf("\nans=%d",odd-even);
        
        //add comment for further understanding
    return 0;
}
