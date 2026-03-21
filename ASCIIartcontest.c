#include <stdio.h>

int main() {
    int g, c, l;
    scanf("%d %d %d", &g, &c, &l);

    int max = g, min = g;

    // find max
    if (c > max) max = c;
    if (l > max) max = l;

    // find min
    if (c < min) min = c;
    if (l < min) min = l;

    // check the difference
    if (max - min >= 10) {
        printf("check again\n");
    } else {
        // find median
        int median;
        if ((g >= c && g <= l) || (g >= l && g <= c)) median = g;
        else if ((c >= g && c <= l) || (c >= l && c <= g)) median = c;
        else median = l;

        printf("final %d\n", median);
    }

    return 0;
}
