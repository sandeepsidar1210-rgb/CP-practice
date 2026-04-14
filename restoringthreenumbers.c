#include <stdio.h>

int main(){
    int x[4];

    scanf("%d %d %d %d", &x[0], &x[1], &x[2], &x[3]);


    int max = x[0];
    for(int i = 1; i < 4; i++){
        if(x[i] > max){
            max = x[i];
        }
    }

    int a, b, c;
    int j = 0;

    for(int i = 0; i < 4; i++){
        if(x[i] != max){
            if(j == 0) a = max - x[i];
            else if(j == 1) b = max - x[i];
            else c = max - x[i];
            j++;
        }
    }

    printf("%d %d %d\n", a, b, c);

    return 0;
}