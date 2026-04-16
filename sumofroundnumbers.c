#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);

    for(int i=0; i<t; i++){
        int n;
        scanf("%d",&n);

        int arr[101];
        int count =0;
        int place =1;

        while(n>0){
            int digit = n % 10;
            
            if(digit!=0){
                arr[count++]= digit * place;
            }
            place = place * 10;
            n = n/10;

        }
        printf("%d\n",count);

        for (int i=0 ; i<count ; i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }

    return 0;
}