#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char s[4] ;

    for (int i =0; i<n ; i++){
        scanf("%s",s);
       
        
            if((s[0]=='Y'||s[0]=='y')&&(s[1] == 'E' || s[1]=='e')&&(s[2] == 'S' || s[2] == 's')){
                printf("YES\n");
            }
             else{
                printf("NO\n");
             }
    

}
    return 0;
}