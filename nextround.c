#include<stdio.h>
int main(){
    int n,k;
    int count=0;
    int num[100];
    scanf("%d %d",&n ,&k);
    for (int i =0; i<n; i++){
        scanf("%d",&num[i]);
    }
    for(int j=0; j<n; j++){
    
        if (num[j]>=num[k-1] && num[j]>0){
            count++;
        }

    }
    printf("%d",count);
    return 0;
    
}