#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
  
    for (int i=0; i<t; i++){
        int arr[7];

        for(int i=0; i<7; i++){
            scanf("%d", &arr[i]);
        }

        int max_int = arr[0];
        int index=0;

        for(int i=1; i<7; i++){
            if(arr[i]>max_int){
                max_int = arr[i];
                index = i;
                
            }
        }
        int sum=0;
        for(int i=0; i<7; i++){
            if(i == index){
                sum = sum + arr[i];
            }
            else{
               sum = sum + (arr[i] * -1);
            }
        }
        
       printf("%d\n",sum);
    }
    return 0;
}