#include <stdio.h>

int main(){
    //amake banate input nite hobe user teke ..tarpor age onusare tara vote korte parbe ki thik korte hobe
    //start the game

    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
  
  

  //using ternary operator
  
    age >=18 ? printf("you are an adult") : printf("your are a child");

  /*  if(age >=18){
        printf("congratulate you are an adult");
    }
    else if(age>=12 && age<18){
        printf("oohh you are not eligiable");
    }
    else{
    printf("you are a child");
    }
*/

}