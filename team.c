#include <stdio.h>
int main(){
    int n;
    int a,b,c;
    scanf("%d",&n);
    int count=0;

    while(n>0){
        scanf("%d %d %d",&a,&b,&c );
        if((a==1 && b==1)||(a==1 && c==1)||(b==1 && c==1)){
            count++;
        }
        n--;
    }
printf( "%d", count);
return 0;
}