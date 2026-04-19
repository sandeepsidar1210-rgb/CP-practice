#include <stdio.h>
#include <stdlib.h>
int main(){
    int arr[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%d", &arr[i][j]);
            // printf("%d ",arr[i][j]);
        }
       
    }
  
    int i_moves =0;
    int j_moves =0;
    int curr_i;
    int curr_j;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(arr[i][j] == 1){
                curr_i = i;
                curr_j = j;

            }
        }
    }

    
    i_moves = abs( curr_i - 2);
    j_moves = abs( curr_j - 2);

printf("%d\n",i_moves + j_moves);
return 0;
}
