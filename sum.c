#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[3];
    for (int i =0; i<n; i++){
        for(int j=0; j<3 ; j++){
             scanf("%d",&arr[j]);
        }

        if ((arr[0] == arr[1]+arr[2]) || (arr[1] == arr[0]+arr[2] ) || (arr[2] == arr[1] + arr[0])){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
   
return 0;      
    
}