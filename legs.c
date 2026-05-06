#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);

    for (int i =0 ; i<t ; i++){
        int n;
        scanf("%d",&n);
        int count = 0;
        while(n !=0){
            if(n>=4){
                count = count + n/4;
                n = n % 4;
            }
            else{
                count ++; 
                break;
            }
        }
        printf("%d\n",count);

    }
    return 0;
}