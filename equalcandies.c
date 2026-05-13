#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    for(int i=0; i<t; i++){

        int n;
        scanf("%d",&n);

        int arr[51];

        for (int j=0; j<n; j++){
            scanf("%d",&arr[j]);
        }

        int min = arr[0];

        for (int j=1; j<n; j++){
            if(arr[j] < min){
                min = arr[j];
            }
        }

        int count = 0;

        for(int j=0; j<n; j++){
            count = count + (arr[j] - min);
        }

        printf("%d\n", count);
    }

    return 0;
}