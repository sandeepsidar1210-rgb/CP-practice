#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum =0 ;
    int count = 0;
    for( int i=1; sum<=n ; i++){
        int need = i * (i+1)/2;
        if (sum + need > n ){
            break;
        }
        sum = sum + need;
        count++; 
    }
    
    printf("%d",count);
    return 0;
}