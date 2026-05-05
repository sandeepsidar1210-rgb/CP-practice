#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for (int i =0; i<t; i++){
        int n;
        scanf("%d",&n);
        int arr[n+1];
        for(int j=0 ; j<n ;j++){
            scanf("%d",&arr[j]);
        }

        for(int j=0; j<n ;j++){
            for(int k=0; k<n-j-1 ;k++){
                if (arr[k]>arr[k+1]){
                    int temp = arr[k];
                    arr[k] = arr[k+1];
                    arr[k+1] = temp;
                }
            }
        }

        int flag = 1;

        for(int j=0 ; j<n-1 ; j++){
            if(arr[j] == arr[j+1]){
                flag = 0;
                break;
            }
        }
        if(flag){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}