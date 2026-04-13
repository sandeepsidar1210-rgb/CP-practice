#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);

    for (int i =0; i<t ;i++){
        int k;
        scanf("%d",&k);

        int count =0;
        int num;
        for (int j=1 ; count<k ; j++){
            if (j%3 !=0 && j%10 != 3)
            {
                count++;
                num=j;
            }

        }
        printf("%d\n",num);
    }
    return 0;
}