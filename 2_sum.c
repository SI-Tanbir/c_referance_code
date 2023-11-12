#include <stdio.h>

int main() {
    // Write C code here
    int a,b,sum;
    printf("input number 1:");
    // %d means here is to integer value if need fload value %f is used
    // & use to store value in a
    scanf("%d",&a);
    printf("input number 2:");
    scanf("%d",&b);
    
    printf("sum of number is:%d\n",sum=a+b);
    printf("sum of number is:%d\n",sum=a-b);
    printf("sum of number is:%d\n",sum=a/b);
    return 0;
}