#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
        int n;
        scanf("%d",&n);

       int count = (n-1)/2;
        printf("%d\n",count);
    }
    return 0;
}