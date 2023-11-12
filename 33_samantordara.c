// 1+2+3+.....n jog korte hobe
#include <stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter last number :");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("1+2+3.... +%d is %d",n,sum);
return 0;
}