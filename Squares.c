#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
        int x1,y1, x2,y2, x3,y3, x4,y4;
        scanf("%d %d",&x1, &y1);
        scanf("%d %d",&x2, &y2);
        scanf("%d %d",&x3, &y3);
        scanf("%d %d",&x4, &y4);  

        int side = 0;

        if(x1 != x2 ){
            side = (x2 - x1);
        }
        else if (x1 != x3)
        {
            side = (x3 - x1);
        }
        else{
            side = (x4 - x1);
        }
        

        printf("%d\n", side * side);
    }

    return 0;
}