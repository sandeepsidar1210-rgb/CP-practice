#include <stdio.h>
#include <string.h>

int main(){
    char name[101];
    scanf("%s",name);
    int count=0;

    for (int i=0; i < strlen(name); i++ ){
        int found= 0;

        for (int j=0; j<i ;j++){
            if(name[i]==name[j]){
                found =1;
                break;

            }
            }
            if(found == 0){
                count++;
            }
        }

        if(count %2 ==0){
            printf("CHAT WITH HER!");
        }
        else{
            printf("IGNORE HIM!");
        }
        return 0;
        
    }
