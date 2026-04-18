#include <stdio.h>
#include <string.h>
int main(){
    int t;
    scanf("%d",&t);

    char s[101];
    int length;


    for(int i=0; i<t ; i++){
        
        scanf("%d",&length);

        scanf("%s",s);

           

        

        int n = strlen(s);

         if(n != 5){
            printf("NO\n");
            continue;
        }
        char target[]= "Timur";

        //bubble sorting the string 
        for(int j=0; j<5; j++){
            for(int k=j+1; k<5; k++){
                if(s[j]>s[k]){
                    char temp = s[j];
                    s[j] = s[k];
                    s[k] = temp;
                }
            }
        }

        //similarly sort target
        for(int j=0; j<5; j++){
            for(int k=j+1; k<5; k++){
                if(target[j] > target[k]){
                    char temp = target[j];
                    target[j] = target[k];
                    target[k] = temp;
                }
            }
        }


        //compare
        int flag =1;
        for(int i=0; i<5;i++){
            if(s[i] != target[i]){
                printf("NO\n");
                flag = 0;
                break;
            }
        }
        if(flag)
            printf("YES\n");

    }
    

    
    return 0;
        

}