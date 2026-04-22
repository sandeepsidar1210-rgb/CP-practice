#include <stdio.h>
int main(){
    int t; 
    scanf("%d",&t);
   

    for (int i=0;i<t; i++){
        int len;
        scanf ("%d",&len);
        int arr[len];

        for(int j=0; j<len; j++){
             scanf("%d",&arr[j]);
        }

        int even_mm = 0;
        int odd_mm = 0;
        for(int j=0 ; j<len ; j++){
            if ( j % 2==0 ){
                if(arr[j] % 2 != 0){
                    even_mm++;
                }
            }
            else{
                if(arr[j] % 2 == 0){
                    odd_mm++;
                }
            }
        }

        if(even_mm == odd_mm){
            printf("%d\n",even_mm);
        }
        else{
            printf("-1\n");
        }
    }
    return 0;

}