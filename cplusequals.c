#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);

    for(int i=0; i<t ; i++){
        int a , b, n;
        scanf("%d %d %d", &a, &b, &n);
        int count =0;
        while(a<=n && b<=n){
            if(a<b){
                a = a + b;
            }
            else{
                b = b + a;
            }
            count++;
        }
        printf("%d\n",count);
    }
    return 0;
}