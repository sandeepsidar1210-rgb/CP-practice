#include <stdio.h>
int main(){
    int k , l , m , n , d;
    int arr[100001];

    scanf("%d %d %d %d %d",&k , &l , &m , &n , &d);
    int count =0;
    for( int i =1 ; i<= d ; i++){
        if((i % k == 0) || (i % l == 0) || (i % m ==0) || (i % n == 0)){
            continue;
    }
    else{
        count++;
    }
    
}
printf("%d",(d - count));
return 0;
}