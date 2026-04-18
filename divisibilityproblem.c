#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);

    int a, b;
   

    for(int i=0; i<t; i++){
        scanf("%d %d",&a , &b);

        if(b>=a){
            int c = b - a;
           printf("%d\n",c);

        }
        else{
            if(a % b == 0){
                printf("0\n");
            }
            
            else
            {   int count = b - (a % b);
                
                printf("%d\n",count);
            }
        }
    }
    return 0;
}