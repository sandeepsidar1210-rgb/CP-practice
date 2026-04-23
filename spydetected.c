#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);

    for (int i = 0 ; i<t ; i++){
        int len;
        scanf("%d",&len);

        int arr[101];
        for (int j=0; j<len ; j++){
            scanf("%d",&arr[j]);
        }

        for(int k=0; k<len ; k++){
            if(k==0){
                if(arr[k] != arr[k + 1 ] && arr[k] != arr[k+2] && arr[k+1] == arr[k+2]){
                    printf("1\n");
                }
            }
            else if(k > 0 && k < len-1)
                {
                    if(arr[k]!=arr[k+1] && arr[k] != arr[k-1]){
                        printf("%d\n",k+1);
                    }
                }
            else{
                if(arr[k]!=arr[k-1] && arr[k]!=arr[0]){
                    printf("%d\n",len);
                }
            }
        }
    }
    return 0;
}
