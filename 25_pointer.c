 /*
 A pointer is a variable that stores the memory address of another variable as its value.

A pointer variable points to a data type (like int) of the same type, and is created with the * operator.


 
 */
#include <stdio.h>
int main(){

 int myAge = 43;     // An int variable
int *ptr = &myAge;// A pointer variable, with the name ptr, that stores the address of myAge

// Output the value of myAge (43)
printf("%d\n", myAge);

// Output the memory address of myAge (0x7ffe5367e044)
printf("%p\n", &myAge);

// Output the memory address of myAge with the pointer (0x7ffe5367e044)
printf("%p\n", ptr);


// Dereference: Output the value of myAge with the pointer (43)
printf("%d\n", *ptr);
return 0;
}