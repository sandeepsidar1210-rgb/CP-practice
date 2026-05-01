#include <stdio.h>
int main(){
    int t; 
    scanf("%d",&t);
    for(int i =0 ; i<t ; i++){
        int long long n, k;
        scanf("%lld %lld",&n ,&k);

        if(n % 2 == 0 ){
            printf("YES\n");
        }
        else{
            if(k % 2 == 1 && n>=k){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }

    }
    return 0;
}