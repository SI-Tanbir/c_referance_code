/*
now will be useing ascii chart numbers to make a game.we will talk number form the user .to see what this number respresnt in asci value
*/

// #include <stdio.h>
// int main(){
//     int a;
//     printf("enter a number :-");
//     scanf("%d",&a);
//     //we take this input number first  conver in charecter with %c ,
//     printf("This %d number resprest in asci char is :-%c\n",a,a);

// return 0;
// }

//now here we will just do the exact anti of the programe i made in earler;
#include <stdio.h>
int main(){
    char a;
    printf("Enter a character :-");
    scanf("%c",&a);
    printf("The %c character represent %d number in ascii value\n",a,a);
return 0;
}