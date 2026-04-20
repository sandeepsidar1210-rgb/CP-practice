#include <stdio.h>
int main(){
    long long n;
    long long k;
    scanf("%lld %lld",&n ,&k);
    
    long long odd = (n+1)/2; //this works for even as well used for counting number of odds in range
    if(k<=odd){
        printf("%lld", 2*k-1); // odd part direct value fetching 2*k -1 
    }
    else{
        printf("%lld", 2*(k-odd)); // first getting at even part (k-odd) then getting the value by * 2;
    }

return 0;

}