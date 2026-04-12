#include <stdio.h>
#include <stdlib.h>

int main (){
    int t ;
    scanf("%d",&t);

    for (int i=0;i<t;i++){
        int a, b;
        scanf("%d %d",&a ,&b);
      

        int diff = abs(a -b); 
        int moves = diff / 10;
        
        if(diff % 10 != 0){
            moves++;
        }

        printf("%d\n",moves);
    }
    return 0;
}