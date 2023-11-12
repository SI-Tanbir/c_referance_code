//we will make upper case to lower case letter without lower case  bild in function

// #include <stdio.h>
// int main(){
//     char upper;
//     printf("Enter uppercase word:");
//     //take input and using ascii chat number 
//     scanf("%c",&upper);
//     //here the differcence between A upper case and a is 32 difference 
//     printf("Lower case word:-%c\n",upper +32);


// return 0;
// }
//so here we take lower case input and make it upper case ;

// #include <stdio.h>
// int main(){
//     char lower;
//     printf("Enter lowercase word:");
//     //take input and using ascii chat number 
//     scanf("%c",&lower);
//     //here the differcence between A upper case and a is 32 difference 
//     printf("upper  case word:-%c\n",lower -32);


// return 0;
// }




//we will make upper case to lower case letter with lower case  bild in function

#include <stdio.h>
int main(){
    char upper ,lower, number;
    printf("Enter lower number:=");
    scanf("%c",&number);
    //to print lower to use tolower() function is used
    upper =toupper(number);
    printf("%c \n",upper);
return 0;
}
