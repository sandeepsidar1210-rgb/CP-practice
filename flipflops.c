#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);

    for (int i =0 ; i<t ; i++){
        int n;
        long long k , c;
        scanf("%d %lld %lld",&n ,&c ,&k);

        long long arr[105];
        for (int j=0; j<n ; j++){
            scanf("%lld",&arr[j]);
        }

        for (int j = 0 ; j < n; j++){
            for (int m = 0 ; m < n - 1 ; m++){
                if (arr[m]> arr[m+1]){
                    long long temp =arr[m];
                    arr[m] = arr[m+1];
                    arr[m+1]= temp;
                }
            }
        }

        for (int j=0; j<n; j++){
            if (arr[j] > c){
                break;
            }
            
            long long increase = c - arr[j];

            if (increase > k){
                increase = k;
            }

            k = k - increase;
            arr[j] = arr[j] + increase;

            c = c + arr[j];
        }

        printf("%lld\n",c);
    }
    return 0;
}