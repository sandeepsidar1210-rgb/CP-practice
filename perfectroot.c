#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    int n;
    while(t--){
        
        scanf("%d",&n);

        for(int i=1; i<=n ; i++){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;

}