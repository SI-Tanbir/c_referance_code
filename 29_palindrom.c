// enter a palindrom number; palindrom number is that number which original and reverse are same;;

#include <stdio.h>
int main(){

    int rem,num,rev=0;
    printf("Enter palindrom number:");
    scanf("%d",&num);
    int orginal=num;
    while(num!=0){
        rem=num%10;
        rev=rev*10 +rem;
        num=num/10;

    }
    if (rev== orginal){
        printf("%d is palindrom number:%d\n",orginal,rev);
    }
    else
    printf("%d is not palindrom number|\n",orginal);
return 0;
}