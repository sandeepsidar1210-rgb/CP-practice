#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int k =1;
    while(k!=n){
        if(k%2==0){
            printf("I love that ");
        }
        else{
            printf("I hate that ");
        }

        k++;
    }

    if(k%2==0){
        printf("I love it ");
    }
    else{
        printf("I hate it ");
    }

    return 0;
    }

