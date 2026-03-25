#include <stdio.h>
#include <string.h>
int main(){
    int n;
    int count =0;
    char s[101];

    scanf("%d",&n);
    scanf("%s", s);

    for (int i =0; i<n ;i++){
        while(s[i]==s[i+1]){
            count++;
            i++;
        }
    }

    printf("%d",count);

return 0;
}