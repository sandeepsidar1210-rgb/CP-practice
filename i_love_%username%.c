#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int score[n];
    for(int i=0; i<n ; i++){
        scanf("%d",&score[i]);
    }

    int max_score= score[0];
    int min_score = score[0];
    int count = 0;

    for(int i=1; i<n; i++){
        if (score[i]>max_score){
            count++;
            max_score= score[i];

        }
        else if (score[i]<min_score)
        {
            count++;
            min_score = score[i];
        }
        
    }

    printf("%d", count);
    return 0;

}