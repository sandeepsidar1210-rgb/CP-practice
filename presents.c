#include <stdio.h>
int main(){
    int n;
    int result[n];

    scanf("%d",&n);
    int arr[n];

    for (int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0; i<n; i++){
        result[arr[i]-1] = arr[i];

    }

    for(int i=0; i<n ; i++){
        printf("%d",result[i]);
    }


    return 0;
}