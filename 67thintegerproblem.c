#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0; i<t ; i++){
        int x;
        scanf("%d",&x);
        
        if (x < 67){
             printf("%d\n", x + 1);
        }  
        else{
             printf("67\n");
        }
           
    }
    return 0;
}