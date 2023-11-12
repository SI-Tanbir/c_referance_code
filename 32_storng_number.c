#include <stdio.h>
/*          strong number." A strong number is a number for which the sum of the factorials of its digits is equal to the number itself. However, there are a few issues in your code that need to be addressed:*/

int factorial(int x) {
    if (x == 0 || x == 1) {
        return 1;
    }
    return x * factorial(x - 1);
}

int main() {
    int sum = 0, num = 145, rem, original = num;

    while (num != 0) {
        rem = num % 10;
        sum += factorial(rem);
        num = num / 10;
    }

    if (original == sum) {
        printf("%d is a strong number", original);
    } else {
        printf("%d is not a strong number", original);
    }

    return 0;
}
