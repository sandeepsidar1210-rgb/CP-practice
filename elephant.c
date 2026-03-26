#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int remainder = x % 5;
    int steps = x / 5;

    while(remainder > 5){
        remainder = remainder % 5;
        steps += steps / 5;

        
    }
    
    if (remainder==0){
        printf("%d",steps);
    }
    else{
        printf("%d",(steps + 1));
    }
      

}