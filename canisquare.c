#include <stdio.h>
#include <math.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int i =0; i<t ; i++){
        int n;
        scanf("%d", &n);
        
        long long sum =0;
        int x;

        for(int i=0; i<n ; i++){
            scanf("%d",&x);

            
            sum = sum + x;
        }

        long long root = sqrt(sum);
        if(root * root == sum){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

        
    }
    return 0;
}