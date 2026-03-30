#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int p;
    scanf("%d",&p);
    int a[n];
    for (int i =0; i <p ; i++){
        scanf("%d",&a[i]);        
    }

    int q;
    scanf("%d",&q);
    int b[n];
    for (int j=0; j<q ; j++){
        scanf("%d",&b[j]);
    }

    for(int i=1; i<=n ;i++){
        int found =0;

        //for a 
        for(int j=0; j<p ; j++){
            if(a[j] == i){
                //found
                found =1;
                break;
            }
        }

        //for b
        for(int j=0; j<q ; j++){
            if(b[j] == i){
                found =1;
                //found
                break;
            }
        }

        //else if not found printing 
        if(found ==0){
        printf("Oh, my keyboard!");
        return 0;
    }
        
    
    }
    printf("I become the guy.");
    return 0;



}