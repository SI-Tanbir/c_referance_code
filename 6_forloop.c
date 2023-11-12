// #include <stdio.h>
// int main(){

  
//     for (char i='a';i<='z';++i){
//         printf("%d\n",i);
//     }

// }  


#include <stdio.h>
// isalpha cytpe.h fuction
#include <ctype.h>

int main() {
    // Start a loop with the initial character 'A'
    for (char i = 'A'; i <= 'z'; ++i) {
        // Check if the current character 'i' is an alphabetic character
        if (isalpha(i)) {
            // If 'i' is alphabetic, print it
            printf("%c\n", i);
        }
        // If 'i' is not alphabetic, skip it
    }

    return 0;
}

/* 
//another way of solve
#include <stdio.h>

int main() {
    for (char i = 'A'; i <= 'z'; ++i) {
        // Check if 'i' is an uppercase letter or a lowercase letter
        if ((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z')) {
            // If 'i' is a letter, print it
            printf("%c\n", i);
        }
    }

    return 0;
}


*/