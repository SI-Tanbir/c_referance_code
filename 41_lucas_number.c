// 2+1+3+4.... like that series is call lucas numbers;
#include <stdio.h>
    int main(){
        int first=2,second=1,n,fibo=0;
        printf("input the time you want go lucas series:-");
        scanf("%d",&n);

        int temp=n-2;
        printf("%d + %d ",first,second);
        for(int i=0;i<temp;i++){
            fibo= first + second;
            first =second;
            second =fibo;
            printf("+ %d",fibo);
        }
        printf("\n\n\n");

     return 0;}