/*i am cal culating the 123 digit with algorithm

the digit is 123;

*/
#include <stdio.h>
int main(){
    int digi=123,rem,tem,sum=0;
    tem = digi;
    while(tem !=0){
        rem=tem%10;
        sum=sum+rem;
        tem=tem/10;

    }
    printf("sum of %d is :-%d",digi,sum);
return 0;
}