#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n, k ;
        scanf("%d %d",&n, &k);
        int array[200001];
        int array2[2];
        for(int j=0; j<n ; j++){
            scanf("%d",&array[j]);
        }
        printf("\n");

        for(int j=0; j<k ; j++){
            scanf("%d",&array2[j]);
        }
        int count =0;

        while(count != len(array)){

        int initial_point=0;
        int final_point=0;

        for(int j=0; j<n; j++){
            if(array[j]==1){
                final_point = j;
            }
        }

        for(int j=0; j>0; j--){
            if(array[j]==1){
                initial_point=j;
            }
        }


        for(int j = initial_point; j <= final_point; j++){
            if(array[j] == 1){
                array[j]=0;
                
            }
            else{
                array[j] = 1;
                count++;
            }
        }

        }

        

    }
}