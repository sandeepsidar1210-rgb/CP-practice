#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    

    while(t--){
        int a[101];
        int n;
        int flag =1;
        
        scanf("%d",&n);
        for(int i =0; i<n; i++){
            scanf("%d",&a[i]);
        }
        
        //sorting
         for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < n - 1; i++) {
            if(a[i + 1] - a[i] > 1) {
                flag = 0;
                break;
            }
        }

        if(flag) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }

    }
    return 0;
}