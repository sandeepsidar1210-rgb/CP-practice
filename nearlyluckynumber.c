#include <stdio.h>
int main(){
    long long num;
    int count =0;
    scanf("%lld",&num);
    while (num != 0) {
        int digit = num % 10;

        if(digit == 4|| digit == 7){
            count ++;
        }

        num = num / 10;  
    }

    if (count == 4 || count == 7){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;

}