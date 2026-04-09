#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int n;
    for(int i=0; i<t; i++){
        scanf("%d", &n);

        int max_gcd;
        for (int j=1; j<=n; j++){
            int a=j;
             max_gcd =a;
            for(int k=j+1;k<=n; k++ ){
                int b=k;
                
                while(b!=0){
                    int temp = b;
                    b = b % a;
                    a = temp;
                }

                if(a>max_gcd){
                    max_gcd = a;
                }


            }
             
        }
        printf("%d\n",max_gcd);
       
        
    }
    return 0;
}