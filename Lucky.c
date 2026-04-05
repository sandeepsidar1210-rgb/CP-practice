#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int num;

    for(int i=0; i<t ;i++){
        scanf("%d",&num);

    
        int sum1 = 0, sum2 = 0;

        // last 3 digits
        for (int i = 0; i < 3; i++) {
            sum2 += num % 10;
            num /= 10;
        }

        // first 3 digits
        for (int i = 0; i < 3; i++) {
            sum1 += num % 10;
            num /= 10;
        }

        if (sum1 == sum2){
            printf("YES\n");
        }
            
        else{
              printf("NO\n");
        }
          
    }
    return 0;


    }
