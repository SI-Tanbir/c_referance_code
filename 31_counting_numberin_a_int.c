#include <stdio.h>
int main(){
    int num=5677,rem,count=0;
    while(num!=0){
        rem=num%10;
        num=num/10;
        count=count+1;
    }
    printf("\n\nconunting number in this integer is %d\n\n",count);
return 0;
}