#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[1001];
    for(int i=0; i<n ;i++){
        scanf("%d",&arr[i]);
    }

    int s_count =0;
    int d_count =0;

    int l = 0, r = n - 1;
    int turn = 0;  
    while(l<=r){
        int pick;

        if(arr[l]>arr[r]){
            pick = arr[l];
            l++;
        }
        else{
            pick = arr[r];
            r--;
        }

        if( turn  ==0){
            s_count += pick;
        }
        else{
            d_count  += pick;
        }
        turn = 1 - turn ;
    }
   
    
    printf("%d %d\n",s_count , d_count );
    return 0;
}