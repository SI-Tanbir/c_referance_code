/*
we will masure the size of variable here so lets start the game
*/


#include <stdio.h>
int main(){
int i;
float f;
double d;
char c;
printf("The size of int = %d  bytes\n ",sizeof(i));
printf("The size of float = %f   bytes\n",sizeof(f));
printf("The size of double = %d   bytes \n",sizeof(d));
printf("The size of character = %c  bytes\n",sizeof(c));
return 0;
}