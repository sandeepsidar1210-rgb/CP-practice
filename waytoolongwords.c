#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d",&n);
    char word[101]={};
    while(n>0){
        scanf("%s", word);
        int count =0;

    for(int i=0; i<strlen(word); i++){
        count++;
    }

    if(count >10){
        printf("%c%d%c \n",word[0],(count-2),word[count-1]);
    }
    else{
        printf("%s\n",word);
    }

        n--;
    }
    

    
    return 0;
}
