/* Function prototype

int add(int a, int b);// step 1. declaration



// Function definition
int add(int a, int b) { //step 2. defination of function
    // ...
}

add(x,y) //step 3. calling the functions
*/


#include <stdio.h>

void table(int n);

int main(){

int a,b;
printf("enter 1st number:- ");
scanf("%d",&a);
printf("enter 2st number:- ");
scanf("%d",&b);
int mul=a * b;
printf("Multipication of a and b is :%d\n",mul);

table(a);
printf("\n");
table(b);
return 0;
}

void table(int n){
    for(int i=0;i<=10;i++){
        printf(" %d  X   %d  =   %d\n ",n,i,(i*n));
    }
}