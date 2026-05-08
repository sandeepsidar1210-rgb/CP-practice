#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d",&t);
    for (int i =0 ; i<t ; i++){
        char s[101];
        scanf("%s",s);

        int n = strlen(s);
        
     for(int i = n-1; i >= 0; i--){

            if(s[i] == 'p'){
                printf("q");
            }

            else if (s[i]=='q')
            {
                printf("p");
            }
            else{
                printf("w");
            }
            
        }
        printf("\n");
    }
return 0;
}