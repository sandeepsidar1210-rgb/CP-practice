#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n ;
        scanf("%d",&n);
        long long a[n];
        int flag =1 ;
         int count =0;

        for(int i=0; i<n ;i++ ){
            scanf("%lld",&a[i]);
        }

        int sorted = 1;

         for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                sorted = 0;
                break;
            }
        }

         if (sorted == 0) {
            printf("0\n");
        }
        else {
            long long min_diff = a[1] - a[0];

            for (int i = 1; i < n - 1; i++) {
                long long diff = a[i + 1] - a[i];
                if (diff < min_diff) {
                    min_diff = diff;
                }
            }

            printf("%lld\n", (min_diff / 2) + 1);
        }
    }
    return 0;
}
