// 1+3+5+7+9

#include <stdio.h>
int main(){
    int i ,n=100,biz=0;
    for (i=1;i<=n;i=i+2){
        printf("%d\n",i);
        biz=biz+i;//sumation of this numbers
        // printf("%d\n",biz);


    }
    printf(" \nSummation of this:%d ",biz);
return 0;
}