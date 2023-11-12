//we will make  fibonacci series 
//0 +1 +1+ 2 ... this is called fibonacci series..
 
#include <stdio.h>
    int main(){
        int first=0;
        int second=1,count=0,i=0;
        int n=5,fibo=0;
        while(i<n){
            if (count<=1){
                fibo=count;
                printf("%d + ",fibo);
                count++;
            }

            else{

            fibo=first + second;
            first=second;
            second=fibo;
            printf(" %d +",
            
            fibo);
            count++;
            if(count ==n){
                printf("\n");
                return 0;
            }

            }
        }




     return 0;}
