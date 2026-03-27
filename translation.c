#include <stdio.h>
#include <string.h>
int main(){

    char s[101];
    char t[101];
    scanf("%s",s);
    scanf("%s",t);

    if(strlen(s)!=strlen(t)){
        printf("NO");
        return 0;
    }

    for (int i =0; s[i]!='\0' ; i++){
        if(s[i] == t[strlen(s)-1-i]){
            continue;
        }
        else{
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}