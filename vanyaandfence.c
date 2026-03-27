#include <stdio.h>
int main(){
    int n, h;
    int row[1001];
    int width = 0;
    scanf("%d %d",&n,&h);
    for(int i =0; i <n; i++){
        scanf("%d",&row[i]);
    }

    for(int i=0;i<n; i++){
        if(row[i]<=h){
            width++;
        }
        else{
            width = width+2;
        }
    }
    printf("%d", width);
    return 0;

}