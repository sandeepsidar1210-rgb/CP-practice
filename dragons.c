#include <stdio.h>

int main() {
    int s, n;
    scanf("%d %d", &s, &n);

    int x[10001], y[10001];
    int i, j, temp;
    int flag = 1;

  
    for(i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }


    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(x[j] > x[j + 1]) {
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;

                temp = y[j];
                y[j] = y[j + 1];
                y[j + 1] = temp;
            }
        }
    }

  
    for(i = 0; i < n; i++) {
        if(s > x[i]) {
            s = s + y[i];
        } else {
            flag = 0;
            break;
        }
    }

    if(flag) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}