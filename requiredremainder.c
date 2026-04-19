#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int x , y , n; 
    for (int i=0; i<t; i++){
        scanf("%d %d %d",&x, &y, &n);

        int r = (n % x);
        int k;
        if(r>=y){
            k = n - ( r - y);
        }
        else{
            k = (n - r ) - ( x - y );
        }
        printf("%d\n",k);
    }
    return 0;
}