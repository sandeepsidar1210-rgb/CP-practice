#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char b[100];
        char a[100];
        int j = 0;

        scanf("%s", b);
        int len = strlen(b);

        a[j++] = b[0];

        for (int i = 1; i < len; i += 2) {
            a[j++] = b[i];
        }

        a[j] = '\0';

        printf("%s\n", a);
    }

    return 0;
}