//1-2+3-4+5-6------n;

#include <stdio.h>

    int main(){

        //i will try my way ..
        int sum=0,i,n=-6;
        for (i=-1;i>=n;i=i-1){
            sum=sum-i;
            printf("%d\n",sum);
            
        }
        printf("-%d",sum);

    return 0;
}