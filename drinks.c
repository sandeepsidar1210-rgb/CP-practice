#include <stdio.h>
int main(){
    int n;
    int sum=0;
    scanf("%d",&n);

    int p[n];
    for (int i =0; i<n; i++){
        scanf("%d",&p[i]);
    }
    for(int i=0; i<n; i++){
        sum = sum + p[i];
    }
    
     float ans;
     ans = ((float)sum/(n*100))*100;
    printf("%.12f" , ans);

    return 0;
}