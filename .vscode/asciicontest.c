#include <stdio.h>

int main() {
    int flag = 1;
    int g, c, l;

    while (flag == 1) {
        printf("Enter three integers (g c l): ");
       
        if (scanf("%d %d %d", &g, &c, &l) != 3) {
            printf("Invalid input. Please enter numbers.\n");
            while(getchar() != '\n'); 
            continue;
        }

     
        int max = g;
        int min = g;

        if (c > max) max = c;
        if (l > max) max = l;
        if (c < min) min = c;
        if (l < min) min = l;

        if (max - min > 10) {
            printf("Difference too large (%d). Check again.\n", max - min);
        } else {
            
            if ((c > l && g > l) || (g > c && l > g)) {
                printf("final %d\n", g);
            } else if (g > c && g > l && c > l) {
                printf("final %d\n", l);
            } else {
                printf("final %d\n", c);
            }

            flag = 0; 
        }
    }

    return 0;
}