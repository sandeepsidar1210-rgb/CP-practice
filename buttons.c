#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);

    for (int i=0; i<t ; i++){
        int a , b, c;
        scanf("%d %d %d",&a,&b,&c);

        if(a > b){
            printf("First\n");
        }
        else if (b>a){
            printf("Second\n");
        }
        else{
            if(c % 2 == 1){
                printf("First\n");
            }
            else{
                printf("Second\n");
            }
        }
    }
    return 0;
}