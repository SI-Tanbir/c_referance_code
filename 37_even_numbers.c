// 1+3+5+7+9

#include <stdio.h>
int main(){
    int i ,n=100,even=0;
    for (i=0;i<=n;i=i+2){
        printf("%d\n",i);
        even=even+i;//sumation of this numbers
        // printf("%d\n",biz);


    }
    printf(" \nSummation of this:%d ",even);
return 0;
}

