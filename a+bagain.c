#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);

    for (int i=0; i<t; i++){
        int n;
        scanf("%d",&n);

        int digit1 = n % 10;
        n = n/10;
        int digit2 = n % 10;

        printf("%d\n",digit1 + digit2);
    }
    return 0;
}