#include <stdio.h>

int main() {
    int num = 123;
    int reversed = 0;

    while (num != 0) {
        int digit = num % 10; // Get the last digit
        reversed = reversed * 10 + digit; // Append the digit to the reversed number
        num /= 10; // Remove the last digit
    }

    printf("Original number: 123\n");
    printf("Reversed number: %d\n", reversed);

    return 0;
}
