#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);

    for (int i=0; i<t; i++){
        int a;
        int b;
        char s;
        scanf("%d%c%d",&a, &s, &b);

        printf("%d\n",a+b);
    }
    return 0;
}