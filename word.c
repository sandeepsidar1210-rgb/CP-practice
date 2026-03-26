#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char s[101];
    scanf("%s", s);
    int uppercount =0;
    int lowercount =0;

    for (int i=0; i<strlen(s) ; i++){
        if(isupper(s[i])){
            uppercount++;
        }
        else if (islower(s[i]))
        {
            lowercount++;
        }
        
    }
     if(uppercount>lowercount){
          for (int i=0; i<strlen(s) ; i++){
       s[i] = toupper(s[i]);
     }
     printf("%s",s);}
  
    else{
        for (int i=0; i<strlen(s) ; i++){
       s[i] = tolower(s[i]);
       
    }
    printf("%s",s);

}
}

