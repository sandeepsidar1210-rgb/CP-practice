#include <stdio.h>
#include <stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,c1,c2;
        scanf("%d",&n);

        //total sum of value/3
        if(n % 3 == 0){
            c1= n / 3;
            c2= n / 3;

        }
        else if (n % 3 == 1)
         {
            c2= ( n - 1 ) / 3;
            c1= c2 + 1;
        }
        else{
            // n % 3 == 2
            c1 = n / 3;
            c2 = n / 3 + 1;
        }
        printf("%d %d\n",c1,c2);

    }
    return 0;
}