// we take input from user and check it if has vowule
#include <stdio.h>
#include <string.h>

int countv(char str[]);

int main() {
    char str[100];
    printf("Enter your full name: ");
    gets(str);

    int vowelCount = countv(str);
    printf("Vowels count: %d\n", vowelCount);

    return 0;
}

int countv(char str[]) {
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]); // Convert to lowercase to handle both uppercase and lowercase vowels

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }

    return count;
}



// #include <stdio.h>
// #include <string.h>
// int countv(char str[]);// we declar a fuction
// int main(){
//     char str[100];//this can take 100 charters of strings
//     printf("Enter your full name");
//     gets(str);// it work like scanf but it can take big value easily
    
//     printf(" This %s Vowels are:%d" ,countv(str));


//     return 0;
// }



//     int countv(char str[]){ // we no define the function
//     int count = 0;
//     char vowel_c[100];
//     for (int i=0;str[i] != "\0";i++){  // \0 means it take null value

//     if (str[i]== 'a' || str[i] == 'e' || str[i] == 'i' || str[i] =='o' || str[i] == 'u'){
//         count++;
//         vowel_c[i]++;
        
//     }
//     }
//     return count ;
    
//     }  