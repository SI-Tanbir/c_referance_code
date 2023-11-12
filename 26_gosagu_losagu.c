// amra gosa gu nirnoy korbo;
//gosasur enlish nam gcd(greatest common factor)
//losagur enlish name lcm (least common multipl)
#include <stdio.h>
int main(){
    int rem,num1 ,num2;
    
    printf("Enter 2 number :");
    scanf("%d %d",&num1,&num2);
    int n1=num1,n2=num2;
    while(n2!=0){
        rem=n1%n2;// bagses nirnoy
        n1=n2;//eta kora hoice jeno 2nd soonkha ke bhgsese diya bhagkore jotokhon porjonto bagses  0 hobe na .. jeii soonkhar bhagses sunno hobe otii gosagu hobe ..
        n2=rem;
    }
    printf("Gosagu of %d,%d is %d ",num1,num2,n1);
    int losagu=(num1*num2)/n1;
    printf("\nlosagu of %d,%d is %d ",num1,num2,losagu);
return 0;
}