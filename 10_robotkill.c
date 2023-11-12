#include <stdio.h>

int main() {
    int h = 5000, a = 10, b = 5, c = 50, d = 20;
    int bulletCount = 0;
    int reloading = 0;

    while (h > 0) {
        for (int i = 0; i < a && h > 0; i++) {
            h -= c;
            bulletCount++;
            printf("You fire a bullet -%d, Robot Health: %d\n", c, h);
        }

        if (h <= 0) {
            printf("Robot is dead\n");
            break;
        }

        for (int j = 0; j < b; j++) {
            h += d;
            printf("Robot healing +%d, Robot Health: %d\n", d, h);
        }
    }

    printf("It took %d bullets to kill the robot.\n", bulletCount);

    return 0;
}
