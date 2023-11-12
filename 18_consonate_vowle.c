// we will take input from user and check where it is vowel and consonet

#include <stdio.h>
int main(){
    int vow;
    printf("Enter vowle");
    scanf("%c",&vow);

    if(vow =='A' || vow =="E" || vow =='I' || vow =="O" || vow =='U' || vow =="a" || vow == "e" || vow == "i" || vow == 'o' || vow == "u"){
        printf("\nVowule");
    }
    else{
        printf("\nConsonet");
    }
return 0;
}