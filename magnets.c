#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int count =1;
    for (int i =0; i <n ; i++){
        scanf("%d",&arr[i]);
        // if(arr[i]!= 10 || arr[i]!= 1){
        //     printf("Enter a valid value");
        //     return 0;
        }

    for(int j=1 ; j<n ; j++){
        if(arr[j] == arr[j-1]){
            continue;
        }
        else{
            count++;
        }
    }

printf("%d", count);    

return 0;

}