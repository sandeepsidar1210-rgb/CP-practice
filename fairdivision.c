#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);

    for (int i =0; i<t; i++){
        int n;
        scanf("%d",&n);
        int arr[101];
        
        int one = 0;

        for(int j=0; j<n; j++){
            scanf("%d",&arr[j]);

            if(arr[j] == 1){
                one++;
            }
        }

        int sum =0;

        for(int j =0; j<n; j++){
            sum = arr[j] + sum;
        }

        if(sum % 2 != 0){
            printf("NO\n");
        }
        else{
            int half = sum / 2;

            if(half % 2 != 0 && one == 0){
                printf("NO\n");
            }
            else{
                printf("YES\n");
            }
        }
    }

    return 0;
}