#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
 

    for(int i=0; i<t; i++){
        int n;
        scanf("%d",&n);

        int arr[n];
        for (int i=0; i<n; i++){
            scanf("%d",&arr[i]);
        }

        int count=0;
        int maxcount = count;
        for(int i=0; i<n; i++){
            if(arr[i] == 0){
                count++;
                if(count>maxcount){
                    maxcount = count;
                }
                continue;
            }
            else{
                count = 0;
            }
        }
        printf("%d\n", maxcount);
    }
    return 0;
}

    