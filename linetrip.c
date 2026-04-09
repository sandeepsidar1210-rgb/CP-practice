#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);

    for(int i=0; i<t ; i++){
        int n; int k;
        scanf("%d %d",&n ,&k );

        int arr[n];
        for (int j=0; j<n; j++){
            scanf("%d",&arr[j]);
        }

        int max_dis= arr[0];
        for(int i=1; i<n ;i++){
            if(arr[i]-arr[i-1]>max_dis){
                max_dis = arr[i]- arr[i-1];
            }
        }
        
        
         if(2*(k-arr[n-1])> max_dis){
            max_dis= 2*(k-arr[n-1]);
        }
        printf("%d\n",max_dis);
    }

    return 0;
}