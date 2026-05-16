#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int x;
        scanf("%d", &x);

        int minDigit = 9;

        while (x > 0) {
            int digit = x % 10;

            if (digit < minDigit) {
                minDigit = digit;
            }

            x = x / 10;
        }

        printf("%d\n", minDigit);
    }

    return 0;
}