#include <stdio.h>

//  *****
//  *****
//  *****
//  *****
//  *****
//  make output of this pattern useing nested loops

int main(){

    for (int i =1;i<=5;i++){
        
//what i discover is nested loop is sore all value and at the time it out of its nested loop it show all value at once  
        for (int j =1;j<=5;j++){
        
        printf("*");}//it not directly print * value at once it output all value once at the end of the loop
    printf("\n");
}


    return 0;
}

/* epic failure i was in so close to solve it damm*/

// #include <stdio.h>

// int main() {
//     int rows = 5; // Number of rows in the pattern

//     // Outer loop to iterate over rows
//     for (int i = 1; i <= rows; i++) {
//         // Inner loop to print '*' for each column
//         for (int j = 1; j <= 5; j++) {
//             printf("*");
//         }
//         // Move to the next line after each row
//         printf("\n");
//     }

//     return 0;
// }
