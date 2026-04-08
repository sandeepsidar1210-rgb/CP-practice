#include <stdio.h>

int main(){
    int Y , W;
    scanf("%d %d",&Y , &W);
    int max = (Y>W) ? Y : W;
    int favorable = 6 - max + 1;

    if (favorable == 6) {
        printf("1/1");
    }
    else if (favorable == 5){
        printf("5/6");
    } 
    else if (favorable == 4) {
        printf("2/3");
    }
    else if (favorable == 3){
        printf("1/2");
    } 
    else if (favorable == 2) {
        printf("1/3");}
    else {
        printf("1/6");
   
}
return 0;
}