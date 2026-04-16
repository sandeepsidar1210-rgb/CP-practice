#include <stdio.h>
int main(){
    int n;

    scanf("%d",&n);
    int arr[101];
    int total = 0;

    for (int i=0; i<n ; i++){
        scanf("%d",&arr[i]); 

        total = total + arr[i];
    }
    
// we will take descending order b'coz we want minimum number of the coins

    for(int i=0; i<n; i++){
       for(int j=i+1; j<n ; j++){
          if(arr[i]<arr[j]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
          }
       }
    }

// arr is sorted in descending order now now we just want oursum and the remaining sum until we have the greater value ;

    int our_sum = 0;
    int count =0;
 
    for(int i=0; i<n ;i++){
        our_sum = arr[i] + our_sum;
        total = total - arr[i];
        count++;

        if(our_sum > total){
            break;
        }
    }
    printf("%d\n",count);

    return 0;
    
}